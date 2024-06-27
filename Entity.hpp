#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include "Vec2.hpp"

class Entity
{
private:
    Vec2 position;
    SDL_Rect currentFrame;
    SDL_Texture* texture;
public:
    Entity(double x, double y, SDL_Texture* tex);

    Vec2 getPosition() const;
    SDL_Texture* getTexture() const;
    SDL_Rect getCurrentFrame() const;
};