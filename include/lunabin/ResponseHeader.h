#ifndef LUNACHAT_INCLUDE_LUNABIN_RESPONSEHEADER_H
#define LUNACHAT_INCLUDE_LUNABIN_RESPONSEHEADER_H

#include <lunap/All.h>
#include <lunabin/CommonHeader.h>

namespace lunabin
{
    constexpr auto ResponseHeaderSize = HeaderSize + sizeof( std::declval< lunap::ResponseHeader >().status );
}

namespace bitsery
{
    template< typename S >
    void serialize( S& s, lunap::ResponseHeader& header )
    {
        lunap::CommonHeader& commonHeader{ header };
        s( commonHeader, header.status );
    }
}

#endif //LUNACHAT_INCLUDE_LUNABIN_RESPONSEHEADER_H
