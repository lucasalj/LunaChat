#ifndef LUNACHAT_INCLUDE_LUNABIN_RESPONSEHEADER_H
#define LUNACHAT_INCLUDE_LUNABIN_RESPONSEHEADER_H

#include <lunap/ResponseHeader.h>
#include <lunabin/CommonHeader.h>

namespace lunabin
{
    template< typename S >
    void serialize( S& s, lunap::ResponseHeader& header )
    {
        lunap::CommonHeader& commonHeader{ header };
        s( commonHeader, header.status );
    }
}

#endif //LUNACHAT_INCLUDE_LUNABIN_RESPONSEHEADER_H
