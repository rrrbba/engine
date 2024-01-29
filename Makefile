#Rule 1
build:
	g++ -Wall -std=c++17 -I"./libs/" src/*.cpp -o gameengine -I/opt/homebrew/include -L/opt/homebrew/lib -lSDL2 -lSDL2_image -llua -lm;

#Rule 2
run:
	./gameengine

#Rule 3
clean:
	rm gameengine
