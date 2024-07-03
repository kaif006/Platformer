#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include "Entity.hpp"

// Renders Window
class RenderWindow
{
private:
    SDL_Renderer* renderer;
    SDL_Window* window;
public:
    RenderWindow();
    RenderWindow(const char* title, int width, int height, bool fullScreen);
    SDL_Texture* loadTexture(const char* file_path);
    void cleanUp();
    void clear();
    void renderEntity(Entity &entity, float scale = 1.0f);
    void renderBG(SDL_Texture* tex);
    void display();
};