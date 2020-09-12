1. napisać funkcję `rot13( std::string & napis )`, która implementuje "szyfrowanie" ROT-13 (dla małych i wielkich liter)

A -> N
B -> O
C -> P
...
M -> Z
N -> A
O -> B
...
Z -> M

2. napisać funkcję konwertującą liczbę zapisaną jako `std::string` na wartość long:

	long str2long( const std::string & s );

(uwzględnić dodatnie i ujemne. Jeśli napis zawiera jakieś literki, to traktujemy je jako koniec liczby)

3. napisać funkcję, która przelicza kolor w postaci RGB np. `230,45,34` (trzy wartości oddzielone przecinkiem) na pojedynczą liczbę typu int

	int str2color( const std::string & s );

4. napisać funkcję, która przelicza adres IPv4 w postaci: `192.168.0.1` na liczbę typu long.

	long ip2long( const std::string & s );

