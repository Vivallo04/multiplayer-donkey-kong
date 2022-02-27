//
// Created by andre on 2/26/2022.
//

#include <iostream>
#include "Server.hpp"

Server::Server()
{
    io.set_open_listener([&]() {
        io.socket() -> emit("key");
    });
    io.connect("http://127.0.0.1:3050");
    std::cout << "Client connected to server" << std::endl;
    //client.socket() ->on("connect");
}

void Server::SendMessage()
{
    io.socket() -> emit("Trying to send information");
}
