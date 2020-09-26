#include <iostream>

#include "grafika.hpp"

int main(){

    Obrazek o{ 400, 400 };

    Prostokat p{ 10,10,200,250,0x554411, 0.5 };

    o.dodaj( p );
    o.dodaj( Prostokat(15,15,150,600,0x44ff44, 0.3 ) );
    o.dodaj( Prostokat(35,35,150,300,0x990000, 0.7 ) );
    o.render();

}