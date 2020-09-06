#include <iostream>

#include "odleglosc.hpp"

struct Sklep {
    int id;
    double x;
    double y;
    int wioski;
    int klienci;
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

    for ( int i = 0; i<ns; i++ ){
        sklepy[i].pokaz();
    }

    for ( int i = 0; i<nw; i++ ){
        std::cout << "Wioska " << i << ": ";
        wioski[i].najblizszy_sklep->pokaz();
    }



    //std::cout << odleglosc_sw( sklepy[0], w1 ) << std::endl;

    std::cout << sizeof( Sklep ) << std::endl;

}