#include <iostream>

void fun( const int * const x ){
    std::cout << "Liczba x wynosi: " << *x << std::endl;
    // x += 1;
    //*x += 1000;
    std::cout << "A teraz: " << *x << std::endl;
}

int main(){

    const int ile = 8;
    int liczby[] = { 15,62,71,888,10,34,35,36 };

    for(int i=0; i<ile; i++){
            std::cout << liczby[i] << " ";
    }
    std::cout << std::endl;

    fun( &(liczby[3]) );

    for(int i=0; i<ile; i++){
            std::cout << liczby[i] << " ";
    }
    std::cout << std::endl;


}