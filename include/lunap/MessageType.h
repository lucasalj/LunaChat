#ifndef LUNACHAT_INCLUDE_LUNAP_MESSAGETYPE_H
#define LUNACHAT_INCLUDE_LUNAP_MESSAGETYPE_H

#include <tuple>
#include <cstdint>

namespace lunap
{
    enum class MessageType : std::uint16_t
    {
        Undefined,
        HelloRequest,
        HelloResponse
    };

    using MessageTuple = std::tuple
            <
                    struct Undefined,
                    struct HelloRequest,
                    struct HelloResponse
            >;

    struct Undefined
    {
    };
}

#endif //LUNACHAT_INCLUDE_LUNAP_MESSAGETYPE_H
