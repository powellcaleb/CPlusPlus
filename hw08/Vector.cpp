#include "Vector.h"



Vector::Vector ()
{
    //constructor
}

Vector::Vector(double x, double y, double z)
{
    this -> x = x;
    this -> y = y;
    this -> z = z;
}

Vector::~Vector()
{
}

double Vector::getX() const
{
    return x;
} // end of getX method



double Vector::getY() const
{
    return y;
} // end of getX method

double Vector::getZ() const
{
    return z;
} // end of getX method


void Vector::set(double x, double y, double z)
{
    this -> x = x;
    this -> y = y;
    this -> z = z;
}

//-----------------------------------------------------------------
Vector Vector::operator+(const Vector& v1) const
{
    auto num1 = v1.getX() + getX();
    auto num2 = v1.getY() + getY();
    auto num3 = v1.getZ() + getZ();
    
    Vector v3;
    v3.set(num1, num2, num3);
    
    return v3;
}
//-----------------------------------------------------------------
double Vector::operator*(const Vector& v1) const
{
    auto num1 = v1.getX() * getX();
    auto num2 = v1.getY() * getY();
    auto num3 = v1.getZ() * getZ();
    
    double sum = num1 + num2 + num3;
    
    return sum;
}

//------------------------------------
Vector Vector::operator*(const double num) const
{
    Vector v2;
    v2.set(getX() * num, getY() * num, getZ() * num);
    
    return v2;
}


Vector& Vector::operator+=(const Vector& vel)
{
    x += vel.getX();
    y += vel.getY();
    z += vel.getZ();

    return *this;
}

//------------------------------PRINT-----------------------------------------
std::ostream& operator<<(std::ostream& out, const Vector& v2)
{
    out << "(" << v2.getX() << "," << v2.getY() << "," << v2.getZ() << ")" ;
    return out;
}

/*
std::ostream& operator<<(std::ostream& out, const Vector& vel)
{
    out << "Velocity: (" << vel.getX() << "," << vel.getY() << "," << vel.getZ() << ")" ;
    return out;
}
*/
