#ifndef FILESTREAMBUF_H
#define FILESTREAMBUF_H
#include <iostream>
#include <cstdio>
#include <stdio.h>

class FileStreamBuf : public std::streambuf
{
    private:
        FILE* fp;
        int arraySize;
        char* array;
    
    public:
        FileStreamBuf(FILE* fp, int arraySize);
        //FileStreamBuf();
        virtual ~FileStreamBuf();
    
        FILE* getFile() const;
    
        virtual int overflow(int c);
        virtual int sync();
        virtual int underflow();
        virtual int uflow();
};

#endif
