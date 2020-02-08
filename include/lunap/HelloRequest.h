#ifndef LUNACHAT_INCLUDE_LUNAP_HELLOREQUEST_H
#define LUNACHAT_INCLUDE_LUNAP_HELLOREQUEST_H

#include <string>
#include <lunap/RequestHeader.h>

namespace lunap
{
    struct HelloRequest
    {
        RequestHeader header;
        std::string userName;
    };
}

#endif //LUNACHAT_INCLUDE_LUNAP_HELLOREQUEST_H
