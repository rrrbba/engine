#Rule 1
build:
	g++ -Wall -std=c++17 src/*.cpp -o gameengine -I/opt/homebrew/include -L/opt/homebrew/lib -lSDL2 -lm;

#Rule 2
run:
	./gameengine

#Rule 3
clean:
	rm gameengine
