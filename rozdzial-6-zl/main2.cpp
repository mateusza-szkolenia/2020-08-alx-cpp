#include <iostream>
#include "Tablica.hpp"

int main(){

    Tablica ta = Tablica( 3 );
    ta.ustaw( 0, 120 );
    ta.pokazsie();

    Tablica tb = Tablica(1);
    tb = tb;

    ta.pokazsie();
    tb.pokazsie();
}
