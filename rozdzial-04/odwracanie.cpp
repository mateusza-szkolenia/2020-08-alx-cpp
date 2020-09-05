#include <iostream>

int main(){
    int liczba;
    int staraliczba;
    int nowaliczba = 0;
    int cyfra;
    int roznica;

    std::cout << "Podaj liczbe: ";
    std::cin >> liczba;
    std::cout << "Podano liczbe: " << liczba << std::endl;

    staraliczba = liczba;

    while( liczba > 0 ){
      cyfra = liczba % 10;
      nowaliczba *= 10;
      nowaliczba += cyfra;
      std::cout << cyfra << std::endl;
      liczba /= 10;
    }
  std::cout << "Liczba po odwroceniu: " << nowaliczba << std::endl;

  roznica = abs( staraliczba - nowaliczba );

  std::cout << "Roznica wynosi: " << roznica << std::endl;

}