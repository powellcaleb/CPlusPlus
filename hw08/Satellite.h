#ifndef SATELLITE_H
#define SATELLITE_H
#include <iostream>
#include "Vector.h"
#include "Planet.h"



class Satellite
{
    private:
        Planet p;
        Vector l;
        Vector vel;
    Vector r;
 
    public:
        Satellite(const Planet& p, const Vector& l, const Vector& vel);
        Satellite();
        virtual ~Satellite();
    
        const Vector& getl() const;
        const Vector& getVel() const;
    
        void setValue(Vector& l, Vector& vel);
        void Update ( const double seconds );
 
       
    

    
    
    
    
    
    //friend std::ostream& operator<<(std::ostream& out, const Vector& v1);
};

#endif


