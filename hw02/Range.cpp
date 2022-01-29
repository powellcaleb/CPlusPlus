//
//  Range.cpp
//  hw02
//
//  Created by Caleb Daniel Powell on 1/28/22.
//

#include <stdio.h>
#include <cmath>
#include "Range.h"

//inital velocity (range function)
void range (double x, double y, double v,  double D, double ax, double ay, double dt, double rad, double deg, double vx, double vy, double t)
{
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
        
        //Output Results
        printf(" At time %.2f seconds, you're distance is %.2f feet.\n ", t,x);
    }
}
