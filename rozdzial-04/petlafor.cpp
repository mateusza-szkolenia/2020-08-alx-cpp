#include <iostream>

int main(){
    int a;
/*
    a = 0;
    while ( a < 10 ){
        std::cout << a << std::endl;
        a++;
    }
*/

    for ( a = 0; a < 20; a++ ){
        if ( a % 2 == 1 ){
            continue;
        }
        std::cout << a << std::endl;
    }
}