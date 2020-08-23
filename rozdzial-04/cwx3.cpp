#include <iostream>

int main(){
    int i;

    for ( i = 1; i <= 100; i++ ){
        if ( i % 3 == 0 ){
            std::cout << "Fizz";
        }
        
        if ( i % 5 == 0 ) {
            std::cout << "Buzz";
        }
        
        if ( ( i % 3 ) && ( i % 5 ) ){
            std::cout << i;
        }

         std::cout << std::endl;

    }

}