#include <iostream>

int main(){
    int x;

    x = 10000;

    while ( x < 1000 ){
        x *= 2;
        std::cout << "x wynosi: " << x << std::endl;    
    }

    std::cout << "x wynosi na koniec: " << x << std::endl;

}