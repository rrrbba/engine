#include "Game.h"
#include <iostream>
#include <SDL2/SDL.h>

//class::contructor method()
Game::Game() {
    std::cout << "Game contructor called!" << std::endl;
}

//class::destructor method()
Game::~Game() {
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
    SDL_Window* window = SDL_CreateWindow(
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
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
    if (!renderer) {
        std::cerr <<"Error creating SDL renderer" << std::endl;
        return;
    }
}

void Game::Run() {

}

void Game::ProcessInput() {

}

void Game::Update() {

}

void Game::Render() {

}

void Game::Destroy() {
    //Destroy window, render and SDL
    
}