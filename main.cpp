#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include <vector>
#include "RenderWindow.hpp"
#include "Entity.hpp"
using namespace std;


int main(int argc, char* argv[]) 
{
    if(SDL_Init(SDL_INIT_VIDEO) > 0)
        cout << "Init error" << SDL_GetError() << endl;

    RenderWindow window("Untitled Platformer", 1280, 720);
    SDL_Texture* platformTex = window.loadTexture("/Users/Kaif/Documents/C++ practice/Games/Platformer/images/Fire_4_16x16.png");

    vector<Entity> entities = 
    {Entity(0,0,platformTex),
     Entity(30,0,platformTex),
     Entity(30,30,platformTex)};

    bool running = true;
    SDL_Event event;

    while(running)
    {
        while(SDL_PollEvent(&event))
        {
            if(event.type == SDL_QUIT)
                running = false;
        }
        window.clear();
        for(Entity& entity : entities)
        {
            window.render(entity);
        }
        window.display();
    }

    window.cleanUp();
    SDL_Quit();
    
    
}

