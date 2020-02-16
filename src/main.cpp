#include <iostream>
#include <lunap/All.h>
#include <lunabin/All.h>
#include <lunaserver/Server.h>

int main()
{
    auto address = lunaserver::net::ip::make_address( "127.0.0.1" );
    auto port = 8080;

    lunaserver::net::io_context io;

    auto consoleLogger = spdlog::stdout_color_mt( "console" );

    std::make_shared< lunaserver::Server >( io, lunaserver::tcp::endpoint( address, port ), consoleLogger )->Run();

    lunaserver::net::signal_set signals( io, SIGINT, SIGTERM );
    signals.async_wait(
            [ & ]( boost::system::error_code const&, int )
            {
                io.stop();
            } );

    io.run();

    return 0;
}
