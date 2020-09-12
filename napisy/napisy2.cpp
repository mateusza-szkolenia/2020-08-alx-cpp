#include <iostream>

bool is_digits( const std::string & s ){
    for ( auto i = 0; i < s.size(); i++ ){
        //std::cout << "Znak [" << s[i] << "] = " << (int)s[i] << std::endl;
        if ( s[i] >= '0' && s[i] <= '9' ){
        //    std::cout << "cyfra!\n";
        }
        else {
            return false;
        }
    }
    return true;
}


void to_upper( std::string & s ){
    for ( unsigned long i = 0; i < s.size(); i++ ){
        if ( s[i] >= 'a' && s[i] <= 'z' ){
            s[i] -= 0x20;
        }
    }
}

// tylko male na duze na co drugiej pozycji

void pokemonize2( std::string &s ){
    for ( unsigned long i = 0; i < s.size(); i+=2 ){
        if ( s[i] >= 'a' && s[i] <= 'z' ){
            s[i] -= 0x20;
        }
    }
}

// zawsze male i duze - wersja pro

void pokemonize( std::string &s ){
    for ( unsigned long i = 0; i < s.size(); i++ ){
        if ( s[i] >= 'a' && s[i] <= 'z' 
        ||   s[i] >= 'A' && s[i] <= 'Z' ){
            int znak = s[i];
            if ( i % 2 == 0 ){
                znak = znak & 0x000000df;
            }
            else {
                znak = znak | 0x00000020;
            }
            s[i] = znak;
        }
    }
}
\
int main(){

    std::string napis = "Mateusz Szkolenie ALX";

    pokemonize( napis );

    std::cout << napis << std::endl;

}
