#ifndef LUNACHAT_INCLUDE_LUNASERVER_HTTPSESSION_H
#define LUNACHAT_INCLUDE_LUNASERVER_HTTPSESSION_H

#include <lunaserver/Net.h>
#include <lunaserver/Beast.h>
#include <lunautil/Logger.h>
#include <memory>
#include <cstdlib>


namespace lunaserver
{
    class HttpSession : public std::enable_shared_from_this< HttpSession >
    {
    public:
        explicit HttpSession( tcp::socket socket, std::shared_ptr< lunautil::Logger > logger );

        void Run();

    private:
        void fail( error_code ec, char const *what );

        void onRead( error_code ec, std::size_t );

        void onWrite( error_code ec, std::size_t );

        tcp::socket m_socket;
        beast::flat_buffer m_buffer;
        http::request< http::string_body > m_request;
        std::shared_ptr< lunautil::Logger > m_logger;
    };
}

#endif //LUNACHAT_INCLUDE_LUNASERVER_HTTPSESSION_H
