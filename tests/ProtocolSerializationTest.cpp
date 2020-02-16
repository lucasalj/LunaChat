#include <catch2/catch.hpp>
#include <lunabin/All.h>
#include <vector>
#include <string_view>

SCENARIO( "Serialization of Hello messages", "[serialization]" )
{
    GIVEN( "A HelloRequest message" )
    {
        constexpr std::string_view userName{ "Fulano de Tal" };
        auto req = lunap::MakeMessage< lunap::MessageType::HelloRequest >( userName.data() );

        WHEN( "I try to serialize the message" )
        {
            using Buffer = std::vector< std::uint8_t >;
            auto buffer = lunabin::RequestToBin< Buffer >( req );

            THEN( "I must have a valid message size" )
            {
                constexpr auto helloRequestSize = lunabin::RequestHeaderSize + ( userName.size() );
                REQUIRE( buffer.size() >= helloRequestSize );
            }
        }

        AND_GIVEN( "I have serialized it" )
        {
            using Buffer = std::vector< std::uint8_t >;
            auto buffer = lunabin::RequestToBin< Buffer >( req );

            WHEN( "I try to deserialize the message" )
            {
                auto[statusHeader, header] = lunabin::RequestHeaderFromBin< Buffer >( buffer );
                auto[status, msg] = lunabin::BodyFromBin< Buffer, lunap::MessageType::HelloRequest >( buffer,
                                                                                                      header.bodySize );

                THEN( "I must have the exact same message I have serialized" )
                {
                    CHECK( statusHeader == lunabin::DeserializationStatus::OK );
                    CHECK( header.protocolName == req.header.protocolName );
                    CHECK( header.protocolVersion == req.header.protocolVersion );
                    CHECK( header.type == req.header.type );
                    CHECK( status == lunabin::DeserializationStatus::OK );
                    REQUIRE( msg.userName == userName );
                }
            }
        }
    }
}