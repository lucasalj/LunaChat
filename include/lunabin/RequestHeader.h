#ifndef LUNACHAT_INCLUDE_LUNABIN_REQUESTHEADER_H
#define LUNACHAT_INCLUDE_LUNABIN_REQUESTHEADER_H

#include <lunap/All.h>
#include <lunabin/CommonHeader.h>

namespace lunabin
{
    constexpr auto RequestHeaderSize = HeaderSize;
}


namespace bitsery
{
    template< typename S >
    void serialize( S& s, lunap::RequestHeader& header )
    {
        lunap::CommonHeader& commonHeader{ header };
        s( commonHeader );
    }
}

#endif //LUNACHAT_INCLUDE_LUNABIN_REQUESTHEADER_H
