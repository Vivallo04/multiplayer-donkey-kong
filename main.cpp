#include <iostream>
#include <SFML/Window.hpp>

int main()
{
    std::cout << "Hello, World!" << std::endl;

    sf::Window window(sf::VideoMode(1280, 720), "Multiplayer Donkey Kong");
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
    return 0;
}
