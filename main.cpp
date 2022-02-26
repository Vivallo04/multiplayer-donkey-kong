#include <iostream>
#include "src/game/Game.hpp"


int main()
{
    std::cout << "Hello, World!" << std::endl;
    Game* game = new Game;
    game -> Run();

    return EXIT_SUCCESS;
}
