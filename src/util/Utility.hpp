//
// Created by andre on 2/26/2022.
//

#ifndef MULTIPLAYER_DONKEY_KONG_UTILITY_HPP
#define MULTIPLAYER_DONKEY_KONG_UTILITY_HPP

#include "string"
#include <SFML/Graphics.hpp>
#include "Errors.hpp"

void getImageAsset(std::string imagePath)
{
    sf::Image image;
    image.loadFromFile("donkey-icon.png");
    if (!image.loadFromFile("donkey-icon.png"))
    {
        throw 1;
    }
}

void getTextureAsset(std::string texturePath)
{

}

#endif //MULTIPLAYER_DONKEY_KONG_UTILITY_HPP