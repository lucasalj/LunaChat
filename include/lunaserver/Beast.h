#ifndef LUNACHAT_INCLUDE_LUNASERVER_BEAST_H
#define LUNACHAT_INCLUDE_LUNASERVER_BEAST_H

#include <boost/beast.hpp>

namespace lunaserver
{
    namespace beast = boost::beast;
    namespace http = boost::beast::http;
    namespace websockets = boost::beast::websocket;
}

#endif //LUNACHAT_INCLUDE_LUNASERVER_BEAST_H
