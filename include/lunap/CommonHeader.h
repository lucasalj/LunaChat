#ifndef LUNACHAT_INCLUDE_LUNAP_COMMONHEADER_H
#define LUNACHAT_INCLUDE_LUNAP_COMMONHEADER_H

#include <lunap/MessageType.h>
#include <array>
#include <cstdint>

namespace lunap
{
    struct CommonHeader
    {
        CommonHeader() noexcept = default;
        explicit CommonHeader( MessageType type ) : type( type )
        {
        }

        std::array< char, 5 > protocolName{ 'l', 'u', 'n', 'a', '_' };
        std::array< char, 5 > protocolVersion{ '0', '.', '0', '.', '1' };
        std::uint16_t bodySize{ 0 };
        MessageType type{ MessageType::Undefined };
    };
}

#endif //LUNACHAT_INCLUDE_LUNAP_COMMONHEADER_H
