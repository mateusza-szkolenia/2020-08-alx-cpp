/*
Napisac funkcje liczaca sume elementow w tablicy

int suma( int *tab, int n ){
}
*/

#include <iostream>

int suma( int *, int );
int max( int *, int );
int min( int *, int );
int xxx( int *, int, int *, int *, int * );

int main(){
    int liczby[] = { 1, 7, -90, 3, 45 };
    std::cout << "suma wynosi: " << suma( liczby, 5 ) << std::endl;
    std::cout << "max wynosi: " << max( liczby, 5 ) << std::endl;
    std::cout << "min wynosi: " << min( liczby, 5 ) << std::endl;

    int w1, w2, w3;
    int ok;
    ok = xxx( liczby, 5, &w1, &w2, &w3 );
    if ( ok ){
        std::cout << "suma wynosi: " << w3 << std::endl;
        std::cout << "max wynosi: " << w2 << std::endl;
        std::cout << "min wynosi: " << w1 << std::endl;
    }
    else {
        std::cout << "Bledne dane - nie udalo sie policzyc" << std::endl;
    }

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

int min( int *tab, int n ){
    int m = tab[0];
    for ( int i = 0; i < n ; i++ ){
        if ( tab[i] < m ){
            m = tab[i];
        }
    }
    return m;
}

int xxx( int *tab, int n, int *pmin, int *pmax, int *ps ){
    int mi = tab[0];
    int ma = tab[0];
    int s = 0;

    for ( int i = 0; i < n ; i++ ){
        if ( tab[i] < 0 ){
            return 0;
        }
        if ( tab[i] < mi ){
            mi = tab[i];
        }
        if ( tab[i] > ma ){
            ma = tab[i];
        }
        s += tab[i];
    }
    *pmin = mi;
    *pmax = ma;
    *ps = s;
    return 1;
}
