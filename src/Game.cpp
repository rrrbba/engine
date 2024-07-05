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
    if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
       std::cerr <<"Error initializing SDL" << std::endl;
       return; 
    } 
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
    SDL
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

}