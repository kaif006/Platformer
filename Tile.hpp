#pragma once
#include "Game.hpp"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include <vector>
#include "RenderWindow.hpp"
#include "Entity.hpp"

class Tile: public Game, public Entity
{
public:
    Tile(double x, double y, SDL_Texture* tex);
};