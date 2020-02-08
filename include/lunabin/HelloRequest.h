#ifndef LUNACHAT_INCLUDE_LUNABIN_HELLOREQUEST_H
#define LUNACHAT_INCLUDE_LUNABIN_HELLOREQUEST_H

#include <bitsery/bitsery.h>
#include <bitsery/brief_syntax.h>
#include <lunap/HelloRequest.h>

namespace lunabin
{
    template< typename S >
    void serialize( S& s, lunap::HelloRequest& msg )
    {
        s( msg.header, msg.userName );
    }
}

#endif //LUNACHAT_INCLUDE_LUNABIN_HELLOREQUEST_H
