#include <iostream>
#include "pierwiastek.hpp"

int main(){

    double x;

    for ( x = 0.00001; x < 100000000000; x *= 7 ){

        std::cout << x << "  " 
            << pierwiastek( x ) << "  " 
            << pierwiastek( x ) * pierwiastek( x ) 
            << std::endl;
    }

}