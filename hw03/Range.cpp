//
//  Range.cpp
//  hw02
//
//  Created by Caleb Daniel Powell on 1/31/22.
//

#include <stdio.h>
#include <cmath>
#include "Range.h"

//Initialize Variables
double range (double deg, double* max_y_ptr)
{
    //Initialize Variables
    double x = 0.0;
    double y = 0.0;
    
    double max_y = 0.0;
    
    double v = 0.0;
    double vx = 0.0;
    double vy = 0.0;
    double t = 0.0;
    double dt = 1.0;
    double ax = 0.0;
    double ay = 0.0;
    double rad = 0.0;
    double D = 0.0;
    
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
        
        //Max Height
        if ( max_y < y )
        {
            max_y = y;
            *max_y_ptr = max_y;
        }
    }
    
    //returns the distance traveled
    return x;
    
}
