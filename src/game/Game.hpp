//
// Created by Vivallo on 2/26/2022.
//

#ifndef MULTIPLAYER_DONKEY_KONG_GAME_HPP
#define MULTIPLAYER_DONKEY_KONG_GAME_HPP
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

class Game
{
private:
    sf::Image* icon{};
public:
    sf::Window window;
    Game();
    void Run();
};


#endif //MULTIPLAYER_DONKEY_KONG_GAME_HPP
