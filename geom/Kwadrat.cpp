#include "Kwadrat.hpp"

Kwadrat::Kwadrat( const double a, int t ) : 
    typ( t ),
    bok( a )
{
    //this->setTyp( Figura::Kwadrat );
    //this->bok = a;
}

double Kwadrat::getBok() const {
    return this->bok;
}

void Kwadrat::setBok( const double a ){
    this->bok = a;
}

double Kwadrat::getPole() const {
    return this->bok * this->bok;
}

int Kwadrat::getTyp() const {
    return this->typ;
}
