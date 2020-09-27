#include <iostream>

#include "Struktury.hpp"

int main(){
    Stos s;
    Kolejka k;

    for ( auto i = 10; i < 14; i++ ){
        s.push(i);
        k.enqueue(i);
    }

    s.pokaz();
    k.pokaz();

    int x;
    x = s.pop();
    std::cout << "Zdjeto ze stosu: " << x << std::endl;
    x = k.dequeue();
    std::cout << "Zdjeto z kolejki: " << x << std::endl;

    s.pokaz();
    k.pokaz();
}