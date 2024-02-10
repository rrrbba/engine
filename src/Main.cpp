#include <iostream>
#include "Game.h"


int main(int argc, char* argv[]) { // argument counter(how many arguments, character pointer array of argument vectors)
    Game game;

    game.Initialize();
    game.Run();
    game.Destroy();
    
    return 0;
}

