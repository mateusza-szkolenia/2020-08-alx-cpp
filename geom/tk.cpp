#include <iostream>

#include "Kwadrat.hpp"
#include "Prostokat.hpp"
#include "Figura.hpp"

double poleFigury( Kwadrat *x ){
    if ( x->getTyp() == Figura::Prostokat ){
        return static_cast<Prostokat *>(x)->getPole();
    }
    else {
        return x->getPole();
    }
}

int main(){
    Kwadrat k{13};
    Prostokat p{12,10};

    Kwadrat k2{10};

    std::cout << "Kwadrat ma pole " << poleFigury( &k ) << std::endl;
    std::cout << "Prostokat ma pole " << poleFigury( &p ) << std::endl;
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