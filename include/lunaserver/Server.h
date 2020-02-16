#ifndef LUNACHAT_INCLUDE_LUNASERVER_SERVER_H
#define LUNACHAT_INCLUDE_LUNASERVER_SERVER_H

#include <memory>
#include <string_view>
#include <lunaserver/Net.h>
#include <lunautil/Logger.h>

namespace lunaserver
{
    class Server : public std::enable_shared_from_this< Server >
    {
    public:
        Server( net::io_context& io, tcp::endpoint const& endpoint, std::shared_ptr< lunautil::Logger > logger );

        void Run();

    private:
        tcp::acceptor m_acceptor;
        tcp::socket m_socket;
        std::shared_ptr< lunautil::Logger > m_logger;

        void onAccept( error_code ec );

        void fail( error_code ec, std::string_view what );
    };
}

#endif //LUNACHAT_INCLUDE_LUNASERVER_SERVER_H
