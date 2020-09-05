#include <iostream>
#include <iomanip>

int main(){
    double n;
    double wynik;

    std::cin >> n;

    wynik = 1.0;
    int i;
    for ( i = 0; i < 15; i++ ){
        std::cout << "Krok: " << i << " Pole: " << n;
        std::cout << " Boki: " << std::setprecision(20) <<  wynik << " i " << ( n / wynik );

        wynik = ( wynik + ( n/wynik) ) / 2.0;

        std::cout << std::endl;
    }


}