#include "Stos.hpp"

Stos::Stos() : 
    max(256),
    rozm(0)
{
    dane = new int[this->max];
}

Stos::~Stos() {
    delete [] dane;
}

void Stos::push( int v ){
    dane[ rozm++ ] = v;
}

int Stos::pop(){
    return dane[ --rozm ];
}

bool Stos::empty() const {
    return rozm == 0;
}