#include <iostream>
#include "Punkt.hpp"

int main(){
    Punkt p1{1,1};
    Punkt p2{5,5};
    Punkt p3{6,7};

    Wielokat w1;

    w1.dodaj( p1 );
    w1.dodaj( p2 );
    w1.dodaj( p3 );
    
    std::cout << w1.obwod() << std::endl;

}
