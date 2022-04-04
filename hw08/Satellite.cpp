#include "Satellite.h"
//#include "Vector.h"
#include "math.h"
#include "cmath"
class Planet;
class Vector;




Satellite::Satellite(const Planet& p, const Vector& l, const Vector& vel)
{
    this -> p = p;
    this -> l = l;
    this -> vel = vel;
    
  
   
}

Satellite::Satellite (){
    
}

Satellite::~Satellite()
{
}

void Satellite:: setValue(Vector& l, Vector& vel){
    this->l = l;
    this->vel = vel;
}

//l = location
const Vector& Satellite::getl() const
{
    return l;
} // end of getX method

const Vector& Satellite::getVel() const
{
    return vel;
} // end of getX method
//-------------------------------------------

void Satellite::Update ( const double seconds )
{
    Vector rUpdate (0.0, 0.0, 0.0);
    Vector velUpdate (0.0, 0.0, 0.0);
    Vector a (0.0, 0.0, 0.0);
    
    rUpdate = r + ( vel * seconds );
    //r += ( vel * seconds );
    
    //vel += ( p.gAcceleration(r) * seconds );
    //velUpdate = vel + ( p.gAcceleration(r) * seconds );
    velUpdate = a * seconds;
    vel = velUpdate;
    r = rUpdate;
    
    
    //Vector v3;
    //v3.set(accel, 0.0, 0.0);
    
    //return vel;
}
