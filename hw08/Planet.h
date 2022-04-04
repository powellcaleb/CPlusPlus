#ifndef PLANET_H
#define PLANET_H
#include <iostream>
#include "Vector.h"
//#include "Satellite.h"
//class Satellite;


class Planet
{
    private:
        double G;
        double M;
        double rP;
        //double r;
 
    public:
        //Planet();
        Planet(double M, double rP);
    Planet();
        virtual ~Planet();
    
        //void 
 
        double getM() const;
        double getrP() const;
        double getr() const;
        //double getY1() const;
        //double getZ1() const;
    
        Vector gAcceleration (const Vector& r) const;
        bool collision (const Vector& r, double rP) const;

    
    //void set (double M, double rP);
    
    
    
    //friend std::ostream& operator<<(std::ostream& out, const Vector& v1);
};

#endif

