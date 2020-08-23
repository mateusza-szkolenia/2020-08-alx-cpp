#include <iostream>

int main(){
    int ile, i;
    double suma = 0.0;

    std::cin >> ile;
    i = ile;

    while( i-- ){
        double liczba;
        std::cout << "Podaj liczbe" << std::endl;
        std::cin >> liczba;
        suma += liczba;
        std::cout << "Suma: " << suma << std::endl;
    }

    std::cout << ( suma / ile ) << std::endl;
}