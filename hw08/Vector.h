#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>

class Vector
{
    private:
        double x;
        double y;
        double z;
 
    public:
        Vector();
        Vector(double x, double y, double z);
        virtual ~Vector();
 
        double getX() const;
        double getY() const;
        double getZ() const;
    
    //Vector operator*(const Vector& v1) const;
        Vector operator+(const Vector& v1) const; //ADDITION
    //Vector operator-(const Vector& v1) const; //SUBTRACTION
    //Vector& operator+=(const Vector& v1); //IN-PLACE
    //Vector& operator*=(double factor); //VECTOR DOUBLE
    
        double operator*(const Vector& v1) const; //VECTOR SUM
        Vector operator*(const double num) const;
    
        Vector& operator+=(const Vector& vel);

    
    void set (double x, double y, double z);
    
    friend std::ostream& operator<<(std::ostream& out, const Vector& v2);
    //friend std::ostream& operator<<(std::ostream& out, const Vector& vel);
};

#endif
