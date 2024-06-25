#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include "RenderWindow.hpp"
using namespace std;


int main(int argc, char* argv[]) 
{
    if(SDL_Init(SDL_INIT_VIDEO) > 0)
        cout << "Init error" << SDL_GetError() << endl;

    RenderWindow window("Untitled Platformer", 1280, 720);
}

