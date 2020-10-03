#include <iostream>
#include <vector>

class Czlowiek {
    public:
        std::string imie;
        int nazwa;
        double wzrost;
        Czlowiek( std::string i, double w ):
            imie(i),
            wzrost(w)
        {
            this->nazwa = ((int)(wzrost*wzrost*1000)) % 50;
        }
        void pokaz(){
            std::cout << "Czlowiek( " << imie << ", " << wzrost << ")" << std::endl;
        }
};

int main(){
    bool X[1000];

    std::vector<Czlowiek> Ludzie;

    Ludzie.push_back( Czlowiek{"Mateusz",1.80} );

    for ( auto i = 0; i < Ludzie.size(); i++ ){
        Ludzie[i].pokaz();
    }
    std::cout << sizeof( X ) << std::endl;

}
