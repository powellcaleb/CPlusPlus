
#include <iostream>
#include <cstdio>
#include <stdio.h>
#include "FileStreamBuf.h"

//constructor
FileStreamBuf::FileStreamBuf (FILE* fp, int arraySize)
{
    this -> fp = fp;
    this -> arraySize = arraySize;
    
    array = new char[arraySize];
    
    setp(array, array+arraySize);
    
    setg(array, array+arraySize, array+arraySize);
  
}

//deconstructor
FileStreamBuf::~FileStreamBuf ()
{
 
}

//get method
FILE* FileStreamBuf::getFile() const
{
    return fp;
}

//------------------------------------------------

int FileStreamBuf::overflow( int c)
{
    //write array to the fp (use fwrite)
    fwrite(array, sizeof(char), arraySize, fp);
    
    array[0] = c;
    setp(array+1, array+arraySize);
    return c;
}

int FileStreamBuf::sync()
{
    
    fwrite(array, sizeof(char), pptr() - array , fp);
    
    setp(array, array+arraySize);
    
    return 0;
}

int FileStreamBuf::underflow()
{
    while ( !feof(fp) ) //while the end of file hasn't been reached yet
    {
        int index = 0;
        
        array[index] = fread(array, sizeof(char), 1, fp);
        
        setg(array, array+arraySize, array+arraySize);
    }
    
    return arraySize;
}

int FileStreamBuf::uflow()
{
    setg(array, array+1, array+arraySize);
    
    return arraySize;
}





