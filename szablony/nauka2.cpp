#include <iostream>

/*

    std::cout << czy_rowne( 2+2, 4, "rowne", "nierowne" ) << std::cout; //funkcja zwraca std::string

    wynik += czy_rowne( 2+2, 4, 100, 0 ); // funkcja zwraca int


*/

template <typename T_comp, typename T_result>
T_result czy_rowne( T_comp a, T_comp b, T_result tv, T_result fv ){
    if ( a == b ){
        return tv;
    }
    else {
        return fv;
    }

}

int main(){

    double wynik = 0.05;

    std::cout << czy_rowne( 2+2, 4, "rowne", "nierowne" ) << std::endl; //funkcja zwraca std::string
    wynik += czy_rowne<int,double>( 2+2, 4, 100, 0 ); // funkcja zwraca int

    std::cout << wynik << std::endl;
}