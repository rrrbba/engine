#include <iostream>



int main(int argc, char* argv[]) { // argument counter(how many arguments, character pointer array of argument vectors)
    
    while(true) {
        ProcessInput();
        Update();
        Render();
    }

    
    return 0;
}

