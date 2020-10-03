## zadanie 1
Napisać funkcję `zakres( a, b )` ktora zwroci std::vector<int> zawierajacy liczby z przedzialu od a do b

## zadanie 2
Stworzyć klasę `TesterPodzielnosci`, która w konstruktorze przyjmuje jeden parametr (int) i można obiekty tej klasy wołać jak funkcję z parametrem typu int, a zwracana wartość typu bool sygnalizuje czy liczba jest podzielna przez wybraną liczbę.

    ```
    class TesterPodzielnosci {

    }

    auto t = TesterPodzielnosci{ 7 };

    t( 21 ); // zwróci true
    t( 20 ); // zwróci false
    ```

##
