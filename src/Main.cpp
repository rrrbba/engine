#include <iostream>
#include <SDL2/SDL.h>


int main(int argc,char* argv[]) {
    SDL_Init(SDL_INIT_EVERYTHING); //initialize everything

    std::cout << "Hello, world!" << std::endl;
    return 0;
}

// g++ -Wall -std=c++17 Main.cpp -o Main -I/opt/homebrew/include -L/opt/homebrew/lib -lSDL2 -lm