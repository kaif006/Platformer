#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

// Renders Window
class RenderWindow
{
private:
    SDL_Renderer* renderer;
    SDL_Window* window;
public:
    RenderWindow(const char* title, int width, int height);
    SDL_Texture* loadTexture(const char* file_path);
    void cleanUp();
};