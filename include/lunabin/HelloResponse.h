#ifndef LUNACHAT_INCLUDE_LUNABIN_HELLORESPONSE_H
#define LUNACHAT_INCLUDE_LUNABIN_HELLORESPONSE_H

#include <bitsery/bitsery.h>
#include <bitsery/brief_syntax.h>
#include <lunap/HelloResponse.h>

namespace lunabin
{
    template< typename S >
    void serialize( S& s, lunap::HelloResponse& msg )
    {
        s( msg.header );
    }
}

#endif //LUNACHAT_INCLUDE_LUNABIN_HELLORESPONSE_H
