#include <iostream>

int main(){
    int x;
    std::cin >> x;

    int ilecyfr = 0, sumacyfr = 0, wspak = 0;

    while( x > 0 ){
        int ostatnia;
        ostatnia = x % 10;
        sumacyfr += ostatnia;
        ilecyfr++;
        wspak = wspak * 10 + ostatnia;
        //std::cout << "Liczba wynosi " << x << std::endl;
        //std::cout << "Ostatnia cyfra: " << ostatnia << std::endl;
        
        x = x / 10;
    }
    std::cout << "Suma cyfr: " << sumacyfr << std::endl;
    std::cout << "Ile cyfr: " << ilecyfr << std::endl;
    std::cout << "Wspak: " << wspak << std::endl;
}