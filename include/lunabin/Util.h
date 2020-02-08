#ifndef LUNACHAT_INCLUDE_LUNABIN_UTIL_H
#define LUNACHAT_INCLUDE_LUNABIN_UTIL_H

#include <bitsery/bitsery.h>
#include <bitsery/adapter/buffer.h>
#include <bitsery/traits/vector.h>
#include <bitsery/traits/array.h>
#include <bitsery/traits/string.h>
#include <bitsery/traits/list.h>
#include <bitsery/traits/forward_list.h>
#include <bitsery/traits/deque.h>
#include <bitsery/brief_syntax.h>
#include <bitsery/brief_syntax/forward_list.h>
#include <bitsery/brief_syntax/vector.h>
#include <bitsery/brief_syntax/list.h>
#include <bitsery/brief_syntax/deque.h>
#include <bitsery/brief_syntax/array.h>
#include <bitsery/brief_syntax/chrono.h>
#include <bitsery/brief_syntax/map.h>
#include <bitsery/brief_syntax/memory.h>
#include <bitsery/brief_syntax/set.h>
#include <bitsery/brief_syntax/stack.h>
#include <bitsery/brief_syntax/string.h>
#include <bitsery/brief_syntax/tuple.h>
#include <bitsery/brief_syntax/unordered_map.h>
#include <bitsery/brief_syntax/unordered_set.h>
#include <bitsery/brief_syntax/variant.h>
#include <lunabin/RequestHeader.h>
#include <lunabin/ResponseHeader.h>
#include <lunabin/DeserializationStatus.h>
#include <lunap/All.h>

namespace lunabin
{
    // Declarations
    template< typename Buffer, typename T >
    inline Buffer RequestToBin( T& msg );

    template< typename Buffer >
    inline auto FromBin( Buffer& buffer );

    template< typename Buffer, lunap::MessageType type >
    inline auto BodyFromBin( Buffer& buffer, std::size_t bodySize );


    // Definitions
    template< typename Buffer, typename T >
    Buffer RequestToBin( T& msg )
    {
        using namespace bitsery;
        Buffer buffer;
        auto writtenSize = quickSerialization< OutputBufferAdapter< Buffer > >( buffer, msg );
        buffer.resize( writtenSize );
        constexpr auto bodySizeOffset = offsetof( lunap::CommonHeader, bodySize );

        auto bodySize = writtenSize - RequestHeaderSize;

        unsigned int i = 0;
        for( auto beg = buffer.begin() + bodySizeOffset,
                     end = beg + sizeof( std::declval< lunap::CommonHeader >().bodySize );
             beg != end; ++beg, ++i )
        {
            *beg = ( bodySize >> ( i * 8 ) ) & 0xFF;
        }
        return std::move( buffer );
    }

    template< typename Buffer >
    auto RequestHeaderFromBin( Buffer& buffer )
    {
        using namespace bitsery;
        lunap::RequestHeader header;
        if( buffer.size() < RequestHeaderSize )
        {
            return std::make_pair( DeserializationStatus::BUFFER_TOO_SMALL_FOR_HEADER, header );
        }
        auto state = quickDeserialization< InputBufferAdapter< Buffer > >( { buffer.begin(), RequestHeaderSize },
                                                                           header );
        if( state.first != bitsery::ReaderError::NoError )
        {
            return std::make_pair( DeserializationStatus::INTERNAL_ERROR, header );
        }
        return std::make_pair( DeserializationStatus::OK, header );
    }

    template< typename Buffer, lunap::MessageType type >
    auto BodyFromBin( Buffer& buffer, std::size_t bodySize )
    {
        using namespace bitsery;
        auto deserializeFullMessage = [ & ]( auto&& msg, bool isRequest )
        {
            auto messageSize = ( isRequest ? RequestHeaderSize : ResponseHeaderSize ) + bodySize;
            if( buffer.size() < messageSize )
            {
                return std::make_pair( DeserializationStatus::BUFFER_TOO_SMALL_FOR_FULL_MESSAGE, msg );
            }
            auto state = quickDeserialization< InputBufferAdapter< Buffer > >( { buffer.begin(), messageSize }, msg );
            if( state.first != bitsery::ReaderError::NoError )
            {
                return std::make_pair( DeserializationStatus::INTERNAL_ERROR, msg );
            }
            return std::make_pair( DeserializationStatus::OK, msg );
        };
        if constexpr( type == lunap::MessageType::HelloRequest )
        {
            return deserializeFullMessage( lunap::HelloRequest{}, true );
        }
        else if constexpr( type == lunap::MessageType::HelloResponse )
        {
            return deserializeFullMessage( lunap::HelloResponse{}, false );
        }
    }
}

#endif //LUNACHAT_INCLUDE_LUNABIN_UTIL_H
