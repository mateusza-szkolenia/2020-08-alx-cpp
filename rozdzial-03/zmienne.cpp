#include <iostream>

int main(){
    
    unsigned int a, b, c;

    a = 65;
    std::cout << "Zmienna a wynosi: " << (int) a << std::endl;

    a = a + 4; // dluga forma 
    a += 4;    // krotka forma

    a = a - 78;
    a -= 78;

    a = a * 7;
    a *= 7;

    a = a / 3;
    a /= 3;

    a = a % 57;
    a %= 57;

    a = a + 1;
    a += 1;
    a++;

    a--;

    ++a;
    



    std::cout << "A teraz zmienna a wynosi: " << a << std::endl;
    b = 90;
    c = 200000 * a + b; // specjalny wzor podany przez ksiegowa

    // cokolwiek
    // c = b - a;

    std::cout << "Zmienna a modulo 8: " << a % 8 << std::endl;
    std::cout << "Zmienna c wynosi:" << c << std::endl;
}