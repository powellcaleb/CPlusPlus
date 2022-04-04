all: main

Vector.o: Vector.cpp Vector.h
	clang++ -c -Wall -Werror -std=c++11 Vector.cpp

Planet.o: Planet.cpp Planet.h
	clang++ -c -Wall -Werror -std=c++11 Planet.cpp

Satellite.o: Satellite.cpp Satellite.h
	clang++ -c -Wall -Werror -std=c++11 Satellite.cpp

main.o: main.cpp Vector.h Planet.h Satellite.h
	g++ -c -Wall -Werror main.cpp

main: main.o Vector.o Planet.o Satellite.o
	g++ -o main main.o Vector.o Planet.o Satellite.o
