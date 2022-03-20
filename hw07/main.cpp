#include <iostream>
#include <cstdio>
#include <cmath>
#include "Vector.h"



int main(int argc, const char * argv[])
{
    //create objects
    Vector v1;
    Vector v2;
    
    //create instances
    Vector& vS1 = v1;
    Vector& vS2 = v2;
    
    //store values
    vS1.set(2.0, 4.0, 6.0);
    vS2.set(1.0, 5.0, 9.0);
    
    //Print out Original Data
    std::cout << "Vector 1: " << v1 << std::endl;
    std::cout << "Vector 2: " << v2 << std::endl;
    
    
    //---------------------------------------------CALCULATIONS------------------------------------
    Vector v3 = v1 + v2; //ADDITION
    Vector v4 = v2 - v1; //SUBTRACTION
    v1 += v1; //IN-PLACE [ (12*9) + (8*5) + (4*1) ]
    double sum = v1 * v2; //VECTORS SUM
    
    
    //----------------------------------------------PRINT-------------------------------------------
    std::cout << "\n" << std::endl;
    
    std::cout << "Addition: " << v3 << std::endl;
    std::cout << "Subtraction: " << v4 << std::endl;
    std::cout << "In-Place: " << v1 << std::endl;
    //std::cout << "Multiply Vectors Double: " << v1 << std::endl;
    std::cout << "Multiply Vectors Sum: " << sum << std::endl;
}
