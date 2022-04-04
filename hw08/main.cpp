#include <iostream>
#include <cstdio>
#include <cmath>
#include "Planet.h"
#include "Vector.h"
#include "Satellite.h"




int main(int argc, const char * argv[])
{
    
    double M = (5.972) * pow(10,24);
    double rP = (6.378) * pow(10,6);
    
    Vector r;
    r.set( (400000.00 + rP), 0.0, 0.0);
    //r.set( 5.0, 0.0, 0.0);
    Vector vel;
    //vel.set(0.0, 7660.00 , 0.0);
    vel.set(0.0, 7660.00 , 0.0);
    
    int seconds = 0;

    
    Planet p (M, rP);
    Satellite s (p, r, vel);
    //Vector v2;
    //Vector& vS2 = v2;
    //vS2.set(2.0, 2.0, 2.0);
    
    //acceleration vector
    //Vector v3;
   // Vector& vS3 = v3;
    //vS3.set(0.0, 0.0, 0.0);
    
    //double sum = v1 * v2;
    double interval = 1.0;
    while ( seconds < 10 )
    {
        s.Update(interval);
        std::cout <<  "Gravitational Acceleration: " << p.gAcceleration(r) << std::endl;
        std::cout <<  "Location: " << s.getl() << std::endl;
        std::cout <<  "Velocity: " << s.getVel() << std::endl;
        printf ( "\n");
        
        seconds += interval;
    }
    
    //-------------------------------------------------------------------------
    
    if ( p.collision(r, rP) == 0 )
    {
        std::cout << "Crash Status: No" << std::endl;
    }
    else
    {
        std::cout << "Crash Status: Yes" << std::endl;
    }
    //std::cout << "Crashed: " << p.collision(r, rP) << std::endl;
    
    
    
}
