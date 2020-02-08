#ifndef LUNACHAT_INCLUDE_LUNAP_REQUESTHEADER_H
#define LUNACHAT_INCLUDE_LUNAP_REQUESTHEADER_H

#include <lunap/CommonHeader.h>

namespace lunap
{
    struct RequestHeader : CommonHeader
    {
        RequestHeader() noexcept = default;

        explicit RequestHeader( MessageType type ) : CommonHeader( type )
        {
        }
    };
}

#endif //LUNACHAT_INCLUDE_LUNAP_REQUESTHEADER_H
