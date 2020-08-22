#include <iostream>
#include <string>

int main(){
    std::string imie;

    std::cout << "Podaj imie: " << std::endl;
    std::cin >> imie;
    std::cout << "Nazywasz sie " << imie << std::endl;

    std::cout << "Test: " << ( imie == "Mateusz" ) << std::endl;

    if ( imie == "Mateusz" ){
        std::cout << "Witaj szefie!" << std::endl;
    }
    else {
        std::cout << "Witaj NIEZNAJOMY!" << std::endl;
    }

    std::cout << "Koniec" << std::endl;

}