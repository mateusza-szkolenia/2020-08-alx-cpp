#include <iostream>

int main(){
    int c;
    c = 2000;

    std::cout << ( c += 5 ) << std::endl;

    ++c;

    std::cout << c << std::endl;

    
    // zapis x++    najpierw zwroc wartosc biezaca, potem powieksz
    // zapis ++x    najpierw powieksz, potem zwroc wartosc powiekszona


}