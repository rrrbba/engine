//every h file needs a protection guard
#ifndef GAME_H
#define GAME_H
//above two lines and last line wraps header file in protection guard. Keeps preprocessor from adding multiple files of this. Makes it only include it once
// cane also use #pragma once

#include <SLD2/SDL.h>

class Game {

    private:
        bool isRunning;
        SDL_Window* window;
        SDL_Renderer* renderer;

    public:
        Game(); //constructor
        ~Game(); //destructor (last fn to be called before an object is destroyed)
        //need to be able to be called from main
        void Initialize();
        void Run();
        void ProcessInput(); //happens frame by frame
        void Update(); //happens frame by frame
        void Render(); //happens frame by frame
        void Destroy();

};

#endif 