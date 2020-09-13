#include <iostream>

int main(){

    int x = 64, y = 64;
    int max = 255;
    int r0, r1, g0, g1, b0, b1;

    int x1 = 3, x2 = 40, y1 = 5, y2 = 60;

    r0 = 0;
    g0 = 255;
    b0 = 104;

    r1 = 138;
    g1 = 24;
    b1 = 255;

    std::cout << "P3" << std::endl;
    std::cout << x << " " << y << std::endl;
    std::cout << max << std::endl;

    int wiersz, kol;

    int r,g,b;

    for ( wiersz = 0; wiersz < y; wiersz++ ){       
        int dr, dg, db;
        dr = ( r1 - r0 )/y;
        dg = ( g1 - g0 )/y;
        db = ( b1 - b0 )/y;
        for ( kol = 0; kol < x; kol++ ){

            if ( kol > x1 && kol < x2 && wiersz > y1 && wiersz < y2 ){
                r = r0 + kol * dr;
                g = g0 + kol * dg;
                b = b0 + kol * db;
            }
            else {
                r = r0 + kol * dr;
                g = b = 0;
            }


            std::cout << r << " " << g << " " << b << std::endl;
        }
    }
}