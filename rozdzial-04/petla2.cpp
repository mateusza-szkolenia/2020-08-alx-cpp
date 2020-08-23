#include <iostream>

int main(){
    int x;

    x = 100;

    do {
        x *= 2;
        std::cout << "x wynosi: " << x << std::endl;    
    }
    while ( x < 1000 );

    

    std::cout << "x wynosi na koniec: " << x << std::endl;

}