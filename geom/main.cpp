#include <iostream>
#include "Punkt.hpp"
#include "Wielokat.hpp"

int main(){
    Punkt p1{0,0};
    Punkt p2{5,0};
    Punkt p3{5,5};

    Wielokat w1;

    w1.dodaj( p1 );
    w1.dodaj( p2 );
    w1.dodaj( p3 );


    std::cout << w1.obwod() << std::endl;
    w1.pokaz();
}
