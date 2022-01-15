//
//  main.cpp
//  PA-2.4
//
//  Created by Caleb Daniel Powell on 1/12/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {

    double y = 1000;
    double v = 0.0;
    double t = 0.0;
    double dt = 1.0;
    double a = (0.0075 * ( v * v ) - 9.81);
 
    while ( y >= 0 )
    {
        v = v + a * ( dt );
        y = y + ( v * dt );
        
        // std::cout << " At time " << t << " seconds, you're " << y << " feet in the air. " << std::endl;
        
        printf(" At time %.2f seconds, you're %.2f feet in the air.\n ", t, y);
        
        t = t + dt;
    }
}
