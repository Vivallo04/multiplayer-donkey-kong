//
// Created by Vivallo on 2/26/2022.
//

#include "Game.hpp"
#include "../util/Utility.hpp"


Game::Game()
{
    window.create(sf::VideoMode(1280, 720), "Multiplayer Donkey Kong");
    if (!font.loadFromFile("assets/Minecraft.ttf"))
    {
        std::cout << "Unable to load font at: " + font.getInfo().family;
    }
    this -> text.setString("Hello");
    this -> text.setFont(font);
    this -> text.setCharacterSize(100);
    this -> text.setFillColor(sf::Color::White);
}

void Game::Run()
{
    while (window.isOpen())
    {
        sf::Event event{};
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color::Red);
        window.draw( text);
        window.display();
    }
}
