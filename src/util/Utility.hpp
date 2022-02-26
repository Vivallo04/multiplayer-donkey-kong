//
// Created by andre on 2/26/2022.
//

#ifndef MULTIPLAYER_DONKEY_KONG_UTILITY_HPP
#define MULTIPLAYER_DONKEY_KONG_UTILITY_HPP

#include "string"
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Errors.hpp"

sf::Texture getImageAsset(std::string imagePath)
{
    sf::Texture texture;
    if (!texture.loadFromFile("donkey-icon.png"))
    {
        std::cout << "Unable to load file: " + imagePath << std::endl;
        throw std::invalid_argument("Unable to load: " + imagePath);
    }
    return texture;
}

void getTextureAsset(std::string texturePath)
{

}

#endif //MULTIPLAYER_DONKEY_KONG_UTILITY_HPP