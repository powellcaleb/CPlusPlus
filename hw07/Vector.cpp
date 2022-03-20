#include "Vector.h"



Vector::Vector ()
{
    //constructor
}

Vector::Vector(double x1, double y1, double z1)
{
    this -> x1 = x1;
    this -> y1 = y1;
    this -> z1 = z1;
}

Vector::~Vector()
{
}

double Vector::getX1() const
{
    return x1;
} // end of getX method



double Vector::getY1() const
{
    return y1;
} // end of getX method



double Vector::getZ1() const
{
    return z1;
} // end of getX method


void Vector::set(double x1, double y1, double z1)
{
    this -> x1 = x1;
    this -> y1 = y1;
    this -> z1 = z1;
}

//------------------ADDITION-----------------------------------------------
Vector Vector::operator+(const Vector& v1) const
{
    auto num1 = v1.getX1() + getX1(); 
    auto num2 = v1.getY1() + getY1();
    auto num3 = v1.getZ1() + getZ1();
    
    Vector v3;
    v3.set(num1, num2, num3);
    
    return v3;
}
//----------------------SUBTRACTION-----------------------------------------
Vector Vector::operator-(const Vector& v1) const
{
    auto num1 = v1.getX1() - getX1();
    auto num2 = v1.getY1() - getY1();
    auto num3 = v1.getZ1() - getZ1();
    
    Vector v4;
    v4.set(num1, num2, num3);
    
    return v4;
}
//------------------------IN-PLACE--------------------------------------------
Vector& Vector::operator+=(const Vector& v1)
{
    x1 += v1.getX1();
    y1 += v1.getY1();
    z1 += v1.getZ1();

    return *this;
}
//--------------------------MULTIPLY-DOUBLE-------------------------------------
Vector& Vector::operator*=(const Vector& v1)
{
    //auto num1 = v1.getX1() * 2.0;
    //auto num2 = v1.getY1() * 2.0;
    //auto num3 = v1.getZ1() * 2.0;

    x1 *= 2.0;
    y1 *= 2.0;
    z1 *= 2.0;
    
    //Vector v6;
    //v1.set(x1*2.0, y1*2.0, z1*2.0);


    return *this;
}
//--------------------------MULTIPLY-VECTORS------------------------------------
double Vector::operator*(const Vector& v1) const
{
    auto num1 = v1.getX1() * getX1();
    auto num2 = v1.getY1() * getY1();
    auto num3 = v1.getZ1() * getZ1();
    
    double sum = num1 + num2 + num3;
    
    return sum;
}
//------------------------------PRINT-----------------------------------------
std::ostream& operator<<(std::ostream& out, const Vector& v1)
{
    out << "X Value: " << v1.getX1() << " Y Value: " << v1.getY1() << " Z Value: " << v1.getZ1();
    return out;
}

