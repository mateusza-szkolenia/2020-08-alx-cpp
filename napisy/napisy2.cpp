#include <iostream>

bool is_digits( const std::string & s ){

    for ( unsigned long i = 0; i < s.size(); i++ ){
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

int main(){

    std::string napis = "367xxx85";

    if ( is_digits(napis) ){
        std::cout << "Same cyfry\n";
    }
    else {
        std::cout << "Inne znaki\n";
    }

}
