//
//  Range.cpp
//  hw05
//
//  Created by Caleb Daniel Powell on 2/15/22.
//

#include <stdio.h>
#include <cmath>
#include "Range.h"

void range (char** art)
{
    //Initialize Variables
    double x = 0.0;
    double y = 0.0;
    double v = 0.0;
    double vx = 0.0;
    double vy = 0.0;
    double t = 0.0;
    double dt = 0.5;
    double ax = 0.0;
    double ay = 0.0;
    double rad = 0.0;
    double D = 0.0;
    
    int new_x = 0;
    int new_y = 0;
    
    //User input for degrees
    double deg = 0.0;
    printf("Enter an angle: ");
    scanf("%lf", &deg);
    
    //Initial Velocity
    rad = deg * ( M_PI / 180.0 );
    vx = 250.0 * cos( rad );
    vy = 250.0 * sin( rad );
    
    //Calculations
    while ( y >= 0 )
    {
        //Total Velocity
        v = sqrt ( ( vx * vx ) + ( vy * vy ) );
        
        //Drag
        D = 0.5 * 0.45 * 0.03 * 1.2 * ( v * v ) / 30.0;
        
        //Components of acceleration
        ax = ( -D * vx ) / v;
        ay = -9.81 - ( D * vy ) / v;
        
        //Change in velocity
        vx = vx + ( ax * dt );
        vy = vy + ( ay * dt );
      
        //Horizontal and Vertical Distance
        x = x + ( vx * dt );
        y = y + ( vy * dt );
        
        //Time
        t+=dt;
        
        //Scale range and height
        new_x = x;
        new_x = new_x/50;
        new_y = y;
        new_y = new_y/50;
        new_x = int (new_x);
        new_y = int (new_y);
        
        //Fill array with * of location
        art[new_y][new_x] = '*';
        
    }  
}

