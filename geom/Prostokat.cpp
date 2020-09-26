#include "Prostokat.hpp"

Prostokat::Prostokat( const double a, const double b, int t ) :
    Kwadrat( a, t ),
    bok2( b )
{
    
}

double Prostokat::getPole() const {
    return this->getBok() * this->bok2;
}

double Prostokat::getBok2() const {
    return this->bok2;
}

void Prostokat::setBok2( double a ){
    this->bok2 = a;
}
