#ifndef LUNACHAT_INCLUDE_LUNABIN_COMMONHEADER_H
#define LUNACHAT_INCLUDE_LUNABIN_COMMONHEADER_H

#include <bitsery/bitsery.h>
#include <bitsery/brief_syntax.h>
#include <lunap/All.h>

namespace lunabin
{
    constexpr auto HeaderSize = sizeof( lunap::CommonHeader );
}


namespace bitsery
{
    template< typename S >
    void serialize( S& s, lunap::CommonHeader& header )
    {
        s( header.protocolName, header.protocolVersion, header.bodySize, header.type );
    }
}

#endif //LUNACHAT_INCLUDE_LUNABIN_COMMONHEADER_H
