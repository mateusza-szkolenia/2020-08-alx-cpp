#include <iostream>

#include "ulamki.hpp"

int main(){

    Ulamek u1{ 70, 400 };
    Ulamek u2{ 21, 49 };

    std::cout << (double) u1 << std::endl;
    std::cout << (double) u2 << std::endl;
    std::cout << ( ( u1 > u2 ) ? "pierwszy mniejszy" : "drugi mniejszy " ) << std::endl;

    std::cout << (std::string) u1 << std::endl;

}