//
//  main.cpp
//  hw02
//
//  Created by Caleb Daniel Powell on 1/24/22.
//

#include <iostream>
#include <cstdio>
#include <cmath>
#include "Range.h"



int main(int argc, const char * argv[])
{
    // Initializing Variables
    double x = 0.0;
    double y = 0.0;
    double v = 0.0;
    double vx = 0.0;
    double vy = 0.0;
    double t = 0.0;
    double dt = 1.0;
    double ax = 0.0;
    double ay = 0.0;
    double rad = 0.0;
    double deg = 45.0;
    double D = 0.0;
    
    //Radians and Initial Velocity
    rad = deg * ( M_PI / 180.0 );
    vx = 250.0 * cos( rad );
    vy = 250.0 * sin( rad );

    //Calculate distance for different degrees
    range( x, y, v, D, ax, ay, dt, rad, deg, vx, vy, t );
    
    
    
}
