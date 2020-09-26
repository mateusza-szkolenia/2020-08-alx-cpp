#include <iostream>

class Maszynista {
    public:
        const int wiek;
        Maszynista( const int wiek = 60 ):
            wiek(wiek)
        {
        }
};

class Pociag {
    private:
        Maszynista maszynista;
    public:
        Pociag( Maszynista m ):
            maszynista(m)
        {

        }
        void opis(){
            std::cout << "Oto pociag, wiek maszynisty: " << this->maszynista.wiek << std::endl;
        }
};

int main(){
    //Maszynista m;

    Pociag p{ Maszynista{} };

    p.opis();


}