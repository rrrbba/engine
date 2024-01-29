#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>


int main(int argc,char* argv[]) {
    SDL_Init(SDL_INIT_EVERYTHING); //initialize everything

    std::cout << "Hello, world!" << std::endl;
    return 0;
}

