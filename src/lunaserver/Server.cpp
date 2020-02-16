#include <lunaserver/Server.h>
#include <lunaserver/HttpSession.h>

namespace lunaserver
{
    Server::Server( boost::asio::io_context& io,
                    net::ip::tcp::endpoint const& endpoint,
                    std::shared_ptr< lunautil::Logger > logger )
            : m_acceptor( io ),
              m_socket( io ),
              m_logger( std::move( logger ) )
    {
        error_code ec;
        m_acceptor.open( endpoint.protocol(), ec );
        if( ec )
        {
            fail( ec, "open" );
            return;
        }

        m_acceptor.set_option( net::socket_base::reuse_address{}, ec );
        if( ec )
        {
            fail( ec, "set_option" );
            return;
        }

        m_acceptor.bind( endpoint, ec );
        if( ec )
        {
            fail( ec, "bind" );
            return;
        }

        m_acceptor.listen( net::socket_base::max_listen_connections, ec );
        if( ec )
        {
            fail( ec, "listen" );
            return;
        }

    }

    void Server::Run()
    {
        m_acceptor.async_accept( m_socket,
                                 [ self = shared_from_this() ]( error_code ec )
                                 {
                                     self->onAccept( ec );
                                 } );
    }

    void Server::onAccept( error_code ec )
    {
        if( ec )
        {
            fail( ec, "accept" );
            return;
        }
        std::make_shared< HttpSession >( std::move( m_socket ), m_logger )->Run();

        m_acceptor.async_accept( m_socket,
                                 [ self = shared_from_this() ]( error_code ec )
                                 {
                                     self->onAccept( ec );
                                 } );
    }

    void Server::fail( error_code ec, std::string_view what )
    {
        if( ec == net::error::operation_aborted )
        {
            return;
        }
        m_logger->error( "{} : {}", what, ec.message() );
    }
}