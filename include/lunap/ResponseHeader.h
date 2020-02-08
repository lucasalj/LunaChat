#ifndef LUNACHAT_INCLUDE_LUNAP_RESPONSEHEADER_H
#define LUNACHAT_INCLUDE_LUNAP_RESPONSEHEADER_H

#include <lunap/ResponseStatus.h>
#include <lunap/CommonHeader.h>

namespace lunap
{
    struct ResponseHeader : CommonHeader
    {
        ResponseStatus status;
    };
}

#endif //LUNACHAT_INCLUDE_LUNAP_RESPONSEHEADER_H
