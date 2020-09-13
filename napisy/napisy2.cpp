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
void rot13_2( std::string &s ){
    for ( unsigned long i = 0; i < s.size(); i++ ){
        if ( s[i] >= 'a' && s[i] <= 'm' ){
            s[i] += 13;
        }
        else if ( s[i] >= 'n' && s[i] <= 'z' ) {
            s[i] -= 13;
        }
        else if ( s[i] >= 'A' && s[i] <= 'M' ){
            s[i] += 13;
        }
        else if ( s[i] >= 'N' && s[i] <= 'Z' ) {
            s[i] -= 13;
        }
    }
}

void rot13_3( std::string &s ){
    for ( unsigned long i = 0; i < s.size(); i++ ){
        if ( s[i] >= 'a' && s[i] <= 'm' || s[i] >= 'A' && s[i] <= 'M' ){
            s[i] += 13;
        }
        else if ( s[i] >= 'n' && s[i] <= 'z' || s[i] >= 'N' && s[i] <= 'Z' ) {
            s[i] -= 13;
        }
    }
}


void rot13_4( std::string &s ){
    for ( unsigned long i = 0; i < s.size(); i++ ){
        if ( s[i] >= 'a' && s[i] <= 'z' ){
            s[i] = 'a' + ((s[i] - 'a' + 13) % 26);
        }
        else if ( s[i] >= 'A' && s[i] <= 'Z' ){
            s[i] = 'A' + ((s[i] - 'A' + 13) % 26);
        }  
    }
}

void rot13( std::string &s ){
    for ( unsigned long i = 0; i < s.size(); i++ ){
        if ( s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' ){
            s[i] = ( (s[i] <= 'Z') ? 'A':'a' ) + ((s[i] - ((s[i] <= 'Z') ? 'A':'a') + 13) % 26);
        }
    }
}

int main(){
    std::string napis; // = "Mateusz Szkolenie ALX";
    std::cin >> napis;
    rot13( napis );
    std::cout << napis << std::endl;
}
