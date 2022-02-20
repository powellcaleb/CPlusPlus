//
//  main.cpp
//  hw05
//
//  Created by Caleb Daniel Powell on 2/15/22.
//

#include <iostream>
#include <cstdio>
#include <cmath>
#include "Range.h"



int main(int argc, const char * argv[])
{
    //Allocate the 2D Array
    char** art = new char*[80];
    for (int i = 0; i < 80; i++)
    {
        art[i] = new char[24];
    }
   
    //Fill the array with space
    for (int i = 0; i < 24; i++)
    {
        for(int j = 0; j < 80; j++)
        {
            art[i][j] = '-';
        }
    }
    
    //print out the array with canonball path
    //art[2][2] = '*'; //test data
    
    range(art);
    for (int i = 24; i > 0; i--)
    {
        for(int j = 0; j < 80; j++)
        {
            printf("%c", art[i][j]);
        }
    }
    
    //Delete the array, deallocate memory
    for (int i = 0; i < 80; i++)
    {
        delete[] art[i];
    }
    delete[] art;
    art = NULL;
   
}

