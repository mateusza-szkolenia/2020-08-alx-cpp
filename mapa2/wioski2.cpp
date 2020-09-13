#include <iostream>
#include <ctime>

#include "odleglosc.hpp"

struct Sklep {
    int id;
    double x;
    double y;
    int wioski;
    int klienci;
    int kolor;
    void pokaz(){
        std::cout << "Sklep " << this->id << " (" << this->x << "," << this->y << "): " << 
            " klientow:" << this->klienci <<
            " z wiosek: " << this->wioski << std::endl;
    }
};

struct Wioska {
    double x;
    double y;
    int pop;
    Sklep *najblizszy_sklep; // zadanie 4
};

double odleglosc_sw( Sklep s, Wioska w ){
    return odleglosc( s.x, s.y, w.x, w.y );
}

int main(){

    std::srand( std::time(nullptr) );
    int ns;
    int nw;

    std::cin >> ns;
    Sklep sklepy[ ns ];
    for ( int i=0; i<ns; i++ ){
        sklepy[i].id = i;
        std::cin >> sklepy[i].x;
        std::cin >> sklepy[i].y;
        sklepy[i].klienci = 0;
        sklepy[i].wioski = 0;
        sklepy[i].kolor = std::rand() & 0xffffff;
    }

    std::cin >> nw;
    Wioska wioski[ nw ];
    for ( int i=0; i<nw; i++){
        std::cin >> wioski[i].x;
        std::cin >> wioski[i].y;
        std::cin >> wioski[i].pop;
    }

    for ( int i = 0; i<nw; i++ ){
        int numnajs = 0;
        for ( int j = 0; j<ns; j++ ){
            if ( odleglosc_sw( sklepy[j], wioski[i] ) < odleglosc_sw( sklepy[numnajs], wioski[i] ) ){
                numnajs = j;
            }
        }
        wioski[i].najblizszy_sklep = &sklepy[numnajs]; // zadanie 4
        
        sklepy[numnajs].klienci += wioski[i].pop;
        sklepy[numnajs].wioski++;
    }

    
    /*
    P3
    400 400
    255
    */

    const int W = 400;
    const int H = 400;

    int bitmapa[ W * H ];
    for ( int y = 0; y < H; y++ ){
        for ( int x = 0; x < W; x++  ){
            //bitmapa[ y * W + x ] = 0xffffff;
            double najodl = 2 * W;
            int najskl = 0;
            for ( int j = 0; j<ns; j++ ){
                double odl;
                odl = odleglosc( sklepy[j].x, sklepy[j].y, x, y );
                if ( odl < najodl ){
                    najodl = odl;
                    najskl = j;
                } 
            }
            bitmapa[ y * W + x ] = sklepy[najskl].kolor;
        }
    }

    for ( int j = 0; j<ns; j++ ){
        int x, y;
        x = sklepy[j].x;
        y = sklepy[j].y;

        for ( int y2 = y - 3; y2 < y + 3; y2 ++ ){
            if ( y2 < 0 ){
                continue;
            }
            if ( y2 >= H ){
                continue;
            }
            for ( int x2 = x - 3; x2 < x + 3; x2++ ){
                if ( x2 < 0 ){
                    continue;
                }
                if ( x2 >= W ){
                    continue;
                }
                bitmapa[ y2 * W + x2 ] = 0xff0000;
            }
        }
    }
    
    for ( int j = 0; j<nw; j++ ){
        int x, y;
        x = wioski[j].x;
        y = wioski[j].y;

        for ( int y2 = y - 3; y2 < y + 3; y2 ++ ){
            if ( y2 < 0 ){
                continue;
            }
            if ( y2 >= H ){
                continue;
            }
            for ( int x2 = x - 3; x2 < x + 3; x2++ ){
                if ( x2 < 0 ){
                    continue;
                }
                if ( x2 >= W ){
                    continue;
                }
                bitmapa[ y2 * W + x2 ] = 0x808080;
                if ( x2 == x && y2 == y ){
                    bitmapa[ y2 * W + x2 ] = wioski[j].najblizszy_sklep->kolor;
                }
            }
        }
    }


    std::cout << "P3" << std::endl;
    std::cout << W << " " << H << std::endl;
    std::cout << 255 << std::endl;
    for ( int y = 0; y < H; y++ ){
        for ( int x = 0; x < W; x++  ){
            int rgb, r,g,b;
            rgb = bitmapa[ y * W + x ];
            b = ( rgb & 0x000000ff );
            g = ( rgb & 0x0000ff00 ) >> 8;
            r = ( rgb & 0x00ff0000 ) >> 16;
            std::cout << r << " " << g << " " << b << std::endl;
        }
    }

}