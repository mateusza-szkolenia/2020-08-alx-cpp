#include <iostream>

int main(){
    int i;

    std::string napis;

    for ( i = 1; i <= 100; i++ ){
        napis = "";


        if ( i % 3 == 0 ){
            napis = "Fizz";
        }
        
        if ( i % 5 == 0 ) {
            napis = "Buzz";
        }

        if ( i % 3 == 0 && i % 5 == 0 ){
            napis = "Foobar";
        }

        if ( napis == "" ){
            std::cout << i;
        }
        else {
            std::cout << napis;
        }

//      TO NIE ZADZIAŁA, BO RÓŻNE TYPY DANYCH - int i std::string
//      std::cout << ( napis == "" ) ? i : napis;

        std::cout << std::endl;

    }

}