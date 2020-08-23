#include <iostream>

int main(){
    int n;
    int i;
    std::cin >> n;

    // 2 * 2 * 2 * 2

    long wynik = 1;

    for ( i = 1; i <= n; i++ ){
        wynik *= 2;
        std::cout << "2 do potegi " << i << " wynosi " << wynik << std::endl;
    }

}