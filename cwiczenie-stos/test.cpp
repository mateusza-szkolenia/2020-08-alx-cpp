#include <iostream>

#include "Stos.hpp"

int main(){

    Stos s;

    if ( s.empty() ){
        std::cout << "Stos pusty!" << std::endl; 
        // MA SIE NAPISAC!
    }
    
    s.push( 7 );

    if ( s.empty() ){
        std::cout << "Stos pusty!" << std::endl; 
        // ma się NIE napisać!
    }

    s.push( 80 );
    s.push( 90 );

    int a = s.pop();
    std::cout << a << " - ma sie napisac 90 " << std::endl;
    s.pop();
    s.pop();

    if ( s.empty() ){
        std::cout << "Stos pusty!" << std::endl; 
        // ma się napisać!
    }


}