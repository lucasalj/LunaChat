#ifndef LUNACHAT_INCLUDE_LUNAP_UTIL_H
#define LUNACHAT_INCLUDE_LUNAP_UTIL_H

#include <type_traits>
#include <lunap/MessageType.h>
#include <lunap/HelloRequest.h>
#include <lunap/HelloResponse.h>

namespace lunap
{
    namespace
    {
        constexpr inline auto isEven( std::size_t n )
        {
            return ( n % 2 ) == 0;
        }
    }

    template< MessageType type >
    using GetMessageType = std::decay_t< decltype( std::get< std::size_t( type ) >( std::declval< MessageTuple >() ) ) >;

    template< MessageType type, typename... Args >
    constexpr auto MakeMessage( Args... args )
    {
        if constexpr( !isEven( std::size_t( type ) ) )
        {
            return GetMessageType< type >{ lunap::RequestHeader{ type }, args... };
        }
        else
        {
            return GetMessageType< type >{ lunap::ResponseHeader{ type }, args... };
        }
    }
}

#endif //LUNACHAT_INCLUDE_LUNAP_UTIL_H
