#include <iostream>

int main(){

    int x = 64, y = 64;
    int max = 255;

    std::cout << "P3" << std::endl;
    std::cout << x << " " << y << std::endl;
    std::cout << max << std::endl;

    int wiersz, kol;

    for ( wiersz = 0; wiersz < y; wiersz++ ){
        for ( kol = 0; kol < x; kol++ ){
            int r,g,b;

            if ( wiersz % 2 == 0 ){
                r = 255; g = 255; b = 255;
            }
            else {
                r = 0; g = 70; b = 230;
            }
            std::cout << r << " " << g << " " << b << std::endl;
        }
    }
}