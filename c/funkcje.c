#include <stdio.h>
#include <stdarg.h>

int f( int a, int b ){
    return 2*a + 3*b;
}

int suma( int count, ... ){
    va_list ap;
    va_start( ap, count );
    int j;
    int wynik = 0;
    for ( j = 0; j < count; j++ ){
        int liczba;
        liczba = va_arg( ap, int );
        wynik += liczba;
    }
    va_end( ap );
    return wynik;
}

int main(){
    int wynik = f( 2, 7 );
    char *b = "Dzien dobry %d %d \n";
    printf(b, wynik , suma( 2, 100, 1000 ), "qwe" );

}