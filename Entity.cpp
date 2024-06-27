#include "Entity.hpp"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include "Vec2.hpp"


Entity::Entity(double x, double y, SDL_Texture* tex):texture(tex)
{
    position.x = x;
    position.y = y;

    currentFrame.x = 0;
    currentFrame.y = 0;
    currentFrame.w = 32 * 4;
    currentFrame.h = 32 * 4;

    
}

Vec2 Entity::getPosition() const
{
    return position;
}

SDL_Texture* Entity::getTexture() const
{
    return texture;
}

SDL_Rect Entity::getCurrentFrame() const
{
    return currentFrame;
}