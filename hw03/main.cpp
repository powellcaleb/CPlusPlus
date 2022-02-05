//
//  main.cpp
//  hw02
//
//  Created by Caleb Daniel Powell on 1/31/22.
//

#include <iostream>
#include <cstdio>
#include <cmath>
#include "Range.h"



int main(int argc, const char * argv[])
{
    double max_y = 0.0;
    //double* max_y_ptr = &max_y;
    double deg = 1.0;
     
    //Open File
    FILE* fp = fopen ("/Users/daniel/Documents/Senior Year 21-22/Spring 2022/C++/CPlusPlus/hw03/distances.txt", "w" );
   
    //Calculate distance for different degrees
    while ( deg < 90 )
    {
        printf ("Angle: %.2f degrees\n", deg);
        
        printf ("Range: %.2f feet\n", range( deg, &max_y ));
        //printf ("Range: %.2f feet\n", range( deg, max_y_ptr ));
        
        printf ("Height: %.2f feet\n\n", max_y);
        
        
        //Write to open file
        fprintf ( fp, "Angle: %.2f degrees\n", deg);
         
        fprintf ( fp, "Range: %.2f feet\n", range( deg, &max_y ));
         
        fprintf ( fp, "Height: %.2f feet\n\n", max_y);
        
        deg = deg + 1;
    }
    
    fclose ( fp );
    
}
