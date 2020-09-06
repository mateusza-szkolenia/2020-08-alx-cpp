#include <iostream>

#include "odleglosc.hpp"

struct Sklep {
    double x;
    double y;
    int klienci;
    int aaa;
    void pokaz(){
        std::cout << "Sklep (" << this->x << "," << this->y << "): " << this->klienci << std::endl;
    }
};

struct Wioska {
    double x;
    double y;
    int pop;
};

double odleglosc_sw( Sklep s, Wioska w ){
    return odleglosc( s.x, s.y, w.x, w.y );
}

int main(){
    int ns;
    int nw;

    std::cin >> ns;
    Sklep sklepy[ ns ];
    for ( int i=0; i<ns; i++ ){
        std::cin >> sklepy[i].x;
        std::cin >> sklepy[i].y;
        sklepy[i].klienci = 0;
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
        sklepy[numnajs].klienci += wioski[i].pop;
    }

    for ( int i = 0; i<ns; i++ ){
        sklepy[i].pokaz();
    }


    //std::cout << odleglosc_sw( sklepy[0], w1 ) << std::endl;

}