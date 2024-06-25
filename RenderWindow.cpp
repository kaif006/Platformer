#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include "RenderWindow.hpp"
using namespace std;

RenderWindow::RenderWindow(const char* title, int width, int height): window(NULL), renderer(NULL)
{
    window = SDL_CreateWindow(title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN);
    if(window == NULL)
    {
        cout << "Failed to initialize window" << SDL_GetError() <<  endl;
    } 

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
}
    
//SDL_Texture* loadTexture(const char* file_path);
    
//void cleanUp();