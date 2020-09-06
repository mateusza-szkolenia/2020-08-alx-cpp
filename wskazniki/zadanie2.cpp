/*
Napisac funkcje liczaca sume elementow w tablicy

int suma( int *tab, int n ){
}
*/

#include <iostream>

int suma( int *, int );
int max( int *, int );

int main(){
    int liczby[] = { 1, 7, 90, 3, 45 };
    std::cout << "suma wynosi: " << suma( liczby, 5 ) << std::endl;
    std::cout << "max wynosi: " << max( liczby, 5 ) << std::endl;
}

int suma( int *tab, int n ){
    int s = 0;
    for ( int i = 0; i < n ; i++ ){
        s += tab[i];
    }
    return s;
}

int max( int *tab, int n ){
    int m = tab[0];
    for ( int i = 0; i < n ; i++ ){
        if ( tab[i] > m ){
            m = tab[i];
        }
    }
    return m;
}