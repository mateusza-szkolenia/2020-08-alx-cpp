#include <iostream>

#include "Kwadrat.hpp"
#include "Prostokat.hpp"
#include "Figura.hpp"

double poleFigury( Figura *x ){
    return x->getPole();
}

void zgadnijTyp( Figura *x ){

    if ( dynamic_cast<Prostokat*>( x ) != nullptr ){
        Prostokat *p = dynamic_cast<Prostokat*>( x );
        std::cout << "To jest Prostokat o bokach: " 
            << p->getBok() << "," << p->getBok2() << std::endl;
    }
    else if ( dynamic_cast<Kwadrat*>( x ) ) {
        Kwadrat *k = dynamic_cast<Kwadrat *>( x );
        std::cout << "To jest Kwadrat o boku " << k->getBok() << std::endl;
    }
    else {
        std::cout << "To się nie ma prawa stać." << std::endl;
    }
    
}

int main(){
    Kwadrat k{13};
    Prostokat p{12,-2};
    //Figura f; //niedozwolone, gdyż jest to klasa abstracyjna
  

    zgadnijTyp( &k );
    zgadnijTyp( &p );
    //zgadnijTyp( &f );
    
    return 0;
}

int main3(){
    Kwadrat k{13};
    Prostokat p{12,10};

    std::cout << "Kwadrat ma pole " << poleFigury( &k ) << std::endl;
    std::cout << "Prostokat ma pole " << poleFigury( &p ) << std::endl;
    return 0;
}

int main2(){
    Kwadrat k{13};
    Prostokat p{12,10};

    Kwadrat *pk;
    pk = &p;

    Prostokat *pp;
    pp = &p;

    std::cout << "PK ma pole " << pk->getPole() << std::endl;
    std::cout << "PP ma pole " << pp->getPole() << std::endl;

    std::cout << "Kwadrat ma pole " << k.getPole() << std::endl;
    std::cout << "Prostokat ma pole " << p.getPole() << std::endl;

    return 0;
}