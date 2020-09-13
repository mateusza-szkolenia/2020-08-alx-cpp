#include <iostream>
#include "Tablica.hpp"

int main(){

    Tablica ta = Tablica( 3 );
    ta.ustaw( 0, 120 );
    Tablica tb = Tablica(1);
    tb = ta;
    ta.pokazsie();
    tb.pokazsie();
}
