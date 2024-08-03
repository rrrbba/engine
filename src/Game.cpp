#include "Game.h"
#include <iostream>
#include <SDL2/SDL.h>

//class::contructor method()
Game::Game() {
    isRunning = false;
    std::cout << "Game contructor called!" << std::endl;
}

//class::destructor method()
Game::Game() {
    std::cout << "Game destructor called!" << std::endl;
}

//   class::[scope]    
void Game::Initialize() {
    //Initialize SDL
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
       std::cerr <<"Error initializing SDL" << std::endl;
       return; 
    } 

    //Create an SDL window
    window = SDL_CreateWindow(
        NULL, 
        SDL_WINDOWPOS_CENTERED, 
        SDL_WINDOWPOS_CENTERED,
        800,
        600,
        SDL_WINDOW_BORDERLESS
    ); 
    if (!window) {
        std::cerr <<"Error creating SDL window" << std::endl;
        return;
    }

    //Create SDL render
    renderer = SDL_CreateRenderer(window, -1, 0);
    if (!renderer) {
        std::cerr <<"Error creating SDL renderer" << std::endl;
        return;
    }

    isRunning = true;
}

void Game::ProcessInput() {
    //Press ESC to exit game loop
    //Check if something has been pressed every frame of animation
    //Purestruct 
    SDL_Event sdlEvent;
    while (SDL_PollEvent(&sdlEvent)) { //while an event is pending, process that event
        switch (sdlEvent.type) {
            case SDL_QUIT:
                isRunning = false;
                break;
            case SDL_KEYDOWN:
                if (sdlEvent.key.keysym.sym == SDLK_ESCAPE) {
                    isRunning = false;
                }
                break;
    }; //& shows it's a reference(gets the address in memory of the struct)


}

void Game::Update() {

}

void Game::Render() {

}

void Game::Run() {
    while(isRunning) {
        //Methods of game class: 
        ProcessInput();
        Update();
        Render();
    }
}

void Game::Destroy() {
    //Destroy render, window and close SDL (in inverse order of how they're created)
    SDL_DestroyRenderer(renderer);
    SDL_DESTROYWINDOW(window);
    SDL_Quit();
}