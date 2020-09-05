#include <iostream>

int myabs( int );
long myabs( long );

int main(){
    long liczba;
    std::cin >> liczba;

    std::cout << "Wartosc bezwzgledna  " << liczba << " to " << myabs( liczba ) << std::endl;

}