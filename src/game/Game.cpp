//
// Created by Vivallo on 2/26/2022.
//

#include "Game.hpp"


Game::Game()
{
    window.create(sf::VideoMode(1280, 720), "Multiplayer Donkey Kong");
}

void Game::Run()
{
    while (window.isOpen())
    {
        sf::Event event{};
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
    }
}
