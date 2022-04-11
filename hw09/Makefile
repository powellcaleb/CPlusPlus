all: main

FileStreamBuf.o: FileStreamBuf.cpp FileStreamBuf.h
	g++ -c -Wall -Werror FileStreamBuf.cpp

main.o: main.cpp FileStreamBuf.h
	g++ -c -Wall -Werror main.cpp

main: main.o FileStreamBuf.o
	g++ -o main main.o FileStreamBuf.o
