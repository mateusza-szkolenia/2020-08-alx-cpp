#include <iostream>
#include "Punkt.hpp"
#include "Wielokat.hpp"

int main(){
    Punkt p1{0,0};
    Punkt p2{5,0};
    Punkt p3{5,5};

    Wielokat w1{1};
    Wielokat w2{7};
        
    for ( auto i = 0; i < 10000; i++ ){
        w1.dodaj( Punkt( i+ 3, i/45 + 7 ) );
    }

    w1.pokaz();
    return 0;

    //std::cout << w1.obwod() << std::endl;

}
