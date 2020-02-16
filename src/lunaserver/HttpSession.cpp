#include <lunaserver/HttpSession.h>

#include <utility>

namespace lunaserver
{
    HttpSession::HttpSession( tcp::socket socket, std::shared_ptr< lunautil::Logger > logger )
            : m_socket( std::move( socket ) ), m_logger( std::move( logger ) )
    {
    }

    void HttpSession::Run()
    {
    }

    void HttpSession::fail( error_code ec, char const *what )
    {

    }

    void HttpSession::onRead( error_code ec, std::size_t )
    {

    }

    void HttpSession::onWrite( error_code ec, std::size_t )
    {

    }
}
