#include <iostream>

int main(){

    int x;

    std::cin >> x;

    //std::string xxxx;

    //xxxx = ( x % 2 == 0 ) ? "parzysta" : "nieparzysta";

    // Jak w Excelu:
    // =JEŻELI( warunek; wartosc_gdy_prawda; wartosc_gdy_falsz )

   // std::cout << "Liczba " << ( ( x % 2 == 0 ) ? "parzysta" : "nieparzysta" ) << std::endl;

    std::cout << "Liczba " << ( ( x % 2 ) ? "nie" : "" ) << "parzysta" << std::endl;

}