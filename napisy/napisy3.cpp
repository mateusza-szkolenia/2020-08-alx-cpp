#include <iostream>

long str2long( const std::string & s ){
    long liczba = 0;
    long znak = 1;
    for ( auto i = 0; i < s.size(); i++ ){
        if ( i == 0 && s[i] == '-' ){
            znak = -1;
            continue;
        }
        if ( s[i] < '0' || s[i] > '9' ){
            break;
        }
        int wartosc_cyfry = ((int)s[i]) - 48;
        std::cout << "znak " << i << " wynosi " << s[i] << " wartosc " << wartosc_cyfry << std::endl;
        liczba = liczba * 10 + wartosc_cyfry;
    }
    return liczba * znak;
}

int main(){
    std::string napis = "9567";
    long liczba;
    liczba = str2long( "-90" );
    std::cout << "napis: " << napis << " liczba:" << liczba << std::endl;
}
