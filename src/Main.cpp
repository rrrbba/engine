#include <iostream>
#include "Game.h"


int main(int argc, char* argv[]) { // argument counter(how many arguments, character pointer array of argument vectors)

    Game game; //contructor method called, since no "new" keyword used to create the object this object will be stored in the stack and will be destroyed when the scope ends

    game.Initialize();
    game.Run();
    game.Destroy();
    
    return 0;
}

