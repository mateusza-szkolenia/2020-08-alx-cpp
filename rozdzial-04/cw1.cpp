#include <iostream>

int main(){

    int a,b;

    std::cin >> a;
    std::cin >> b;

    while( a <= b ){
        if ( a % 2 == 0 ){
            std::cout << a << std::endl;
        }
        a++;
    }
}