#include <iostream>

int main(){

    int wiek = 65;
    int x = 10999;

    int* pwiek;
    pwiek = &wiek;
    
    x = *pwiek;

    //pwiek = 90;
    *pwiek = 90;

    char literka = 'a';
    char *pwiek2;
    pwiek2 = &literka;

    std::cout << "zmienna wiek: " << wiek << std::endl;

    std::cout << "wskaznik pwiek: " << (void*)main << std::endl;

    std::cout << "zmienna x: " << x << std::endl;

}