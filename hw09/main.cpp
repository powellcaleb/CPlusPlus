//
//  main.cpp
//  hw09
//
//  Created by Caleb Daniel Powell on 04/04/2022
//

#include <iostream>
#include <cstdio>
#include <stdio.h>
#include "FileStreamBuf.h"

int main(int argc, const char * argv[])
{
    //open text file
    FILE* fp = fopen ("FSB.txt", "wb");
    
    //create class object and stream object
    FileStreamBuf fsb (fp, 1);
    std::ostream os (&fsb);
    
    //write to the stream
    os.write("My name is Caleb Daniel Powell", 40);
    
    //close the file
    fclose(fp);
  
}
