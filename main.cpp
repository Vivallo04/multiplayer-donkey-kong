#include <iostream>
#include "src/game/Game.hpp"
#include "src/server/Server.hpp"


int main()
{
    std::cout << "Hello, World!" << std::endl;
    Server *server = new Server();
    server -> SendMessage();
    Game* game = new Game;
    game -> Run();

    return EXIT_SUCCESS;
}
