#include <cmath>
#include "Punkt.hpp"

Punkt::Punkt() : Punkt( 0, 0 ){
}

Punkt::Punkt( double x, double y ){
    this->x = x;
    this->y = y;
}

double Punkt::odleglosc( const Punkt &p ){
    return std::sqrt( (p.x - this->x)*(p.x - this->x ) + (p.y - this->y)*(p.y - this->y) );
}
