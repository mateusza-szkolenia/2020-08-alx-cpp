#include <iostream>

int main(){

    int i;

    for ( i = 25; i < 100; i++ ){
        if ( i % 3 ){
            continue;
        }
        std::cout << i << std::endl;
    }
}