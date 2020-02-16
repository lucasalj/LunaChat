#ifndef LUNACHAT_INCLUDE_LUNASERVER_NET_H
#define LUNACHAT_INCLUDE_LUNASERVER_NET_H

#include <boost/asio.hpp>

namespace lunaserver
{
    namespace net = boost::asio;
    using tcp = net::ip::tcp;
    using error_code = boost::system::error_code;
}

#endif //LUNACHAT_INCLUDE_LUNASERVER_NET_H