#include "RenderWindow.hpp"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include "Entity.hpp"
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
    
SDL_Texture* RenderWindow::loadTexture(const char* file_path)
{
    SDL_Texture* texture = NULL;
    texture = IMG_LoadTexture(renderer, file_path);

    if(texture == NULL)
    {
        cout << "Failed to load texture" << SDL_GetError() << endl;
    }
    return texture;
}
    
void RenderWindow::cleanUp()
{
    SDL_DestroyWindow(window);
}

void RenderWindow::clear()
{
    SDL_RenderClear(renderer);
}

void RenderWindow::render(Entity &entity)
{
    SDL_Rect src; // source rect
    src.x = entity.getCurrentFrame().x;
    src.y = entity.getCurrentFrame().y;
    src.w = entity.getCurrentFrame().w;
    src.h = entity.getCurrentFrame().h;

    SDL_Rect des; // destination rect
    des.x = entity.getPosition().x;
    des.y = entity.getPosition().y;
    des.w = entity.getCurrentFrame().w;
    des.h = entity.getCurrentFrame().h;
    
    SDL_RenderCopy(renderer, entity.getTexture(), &src, &des);
}

void RenderWindow::display()
{
    SDL_RenderPresent(renderer);
}