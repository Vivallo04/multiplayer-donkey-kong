//
// Created by andre on 2/26/2022.
//

#ifndef MULTIPLAYER_DONKEY_KONG_SERVER_HPP
#define MULTIPLAYER_DONKEY_KONG_SERVER_HPP
# include "../socket.io-client-cpp/src/sio_client.h"

class Server
{
public:
    sio::client io;
    Server();

    void SendMessage();

};


#endif //MULTIPLAYER_DONKEY_KONG_SERVER_HPP
