#include "Planet.h"
//#include "Vector.h"
#include "math.h"
#include "cmath"
class Vector; //?





Planet::Planet(double M, double rP) : G( (6.67408) * pow(10,-11) )
{
    this -> M = M;
    this -> rP = rP;
  
   
}
Planet::Planet ()
{
    
}
Planet::~Planet()
{
}

double Planet::getM() const
{
    return M;
} // end of getX method

double Planet::getrP() const
{
    return rP;
} // end of getX method

//-------------------------------------------------------------------
/*
double Planet::gAcceleration (double M, double rP, double r)
{
    double square = r * r;
    double accel = -(((G * M) / (square * sqrt(square))) * r);
    return accel;
}*/

Vector Planet::gAcceleration ( const Vector& r) const
{
    double square = r * r;
    Vector accel = r * -((G * M) / (square * sqrt(square)));
    
    //Vector v3;
    //v3.set(accel, 0.0, 0.0);
    
    return accel;
}

bool Planet::collision (const Vector& r, double rP) const
{
    if ( (r * r) < pow(rP, 2) )
    {
        return true;
    }
    else
    {
        return false;
    }
}
