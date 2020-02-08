#ifndef LUNACHAT_INCLUDE_LUNAP_RESPONSEHEADER_H
#define LUNACHAT_INCLUDE_LUNAP_RESPONSEHEADER_H

#include <lunap/ResponseStatus.h>
#include <lunap/CommonHeader.h>

namespace lunap
{
    struct ResponseHeader : CommonHeader
    {
        ResponseHeader() noexcept = default;

        explicit ResponseHeader( MessageType type ) : CommonHeader( type )
        {
        }

        ResponseStatus status{ ResponseStatus::OK };
    };
}

#endif //LUNACHAT_INCLUDE_LUNAP_RESPONSEHEADER_H
