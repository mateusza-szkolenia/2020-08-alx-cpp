#include <iostream>

int main(){
   
   enum kolor {
       CZERWONY, CZARNY, BIALY, NIEBIESKI
   };

   kolor kolor_samochodu1 = CZERWONY;

    if ( kolor_samochodu1 == NIEBIESKI ){
        std::cout << "Jaki ladny" << std::endl;
    }
    if ( kolor_samochodu1 == CZERWONY ){
        std::cout << "Jaki szybki" << std::endl;
    }

}