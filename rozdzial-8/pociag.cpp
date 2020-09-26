#include <iostream>

class Pociag {
    private:
        int dlugosc;

    public:
    
    explicit Pociag( int dlugosc ){
        std::cout << "Utworzono pociag " << std::endl;
        this->dlugosc = dlugosc;
    }

    void opis(){
        std::cout << "Pociag o dlugosci " << this->dlugosc << std::endl;
    }

};

int main(){

    Pociag p1{44};
    Pociag p2(56);

    Pociag p3 = Pociag(100);
    Pociag p4 = Pociag( 6.7 );

    p1.opis();
    p2.opis();
    p3.opis();
    p4.opis();

}