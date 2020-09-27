#include <iostream>

#include "Struktury.hpp"

int main(){
    Stos s;

    s.pokaz();

    for ( auto i = 10; i < 14; i++ ){
        s.push(i);
    }

    s.pokaz();

    int x;
    x = s.pop();
    std::cout << "Zdjeto ze stosu: " << x << std::endl;
    x = s.pop();
    std::cout << "Zdjeto ze stosu: " << x << std::endl;
    x = s.pop();
    std::cout << "Zdjeto ze stosu: " << x << std::endl;

    s.pokaz();

}