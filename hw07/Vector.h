#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>

class Vector
{
    private:
        double x1;
        double y1;
        double z1;
 
    public:
        Vector();
        Vector(double x1, double y1, double z1);
        virtual ~Vector();
 
        double getX1() const;
        double getY1() const;
        double getZ1() const;
    
    Vector operator+(const Vector& v1) const; //ADDITION
    Vector operator-(const Vector& v1) const; //SUBTRACTION
    Vector& operator+=(const Vector& v1); //IN-PLACE
    Vector& operator*=(const Vector& v1); //VECTOR DOUBLE
    double operator*(const Vector& v1) const; //VECTOR SUM

    
    void set (double x1, double y1, double z1);
    
    friend std::ostream& operator<<(std::ostream& out, const Vector& v1);
};

#endif
