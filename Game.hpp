#pragma once 
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include <vector>
#include "RenderWindow.hpp"
#include "Entity.hpp"
#include "Player.hpp"

using namespace std;

class Game
{
protected:
    bool isRunning;
    RenderWindow window;
    vector <Entity*> entities;
    Player* player;

public:
    Game();
    ~Game();
    void init(const char* title, int width, int height, bool fullScreen);
    void initLevel();
    void handleEvents();
    void update();
    void render();
    void clean();

    bool running();
};