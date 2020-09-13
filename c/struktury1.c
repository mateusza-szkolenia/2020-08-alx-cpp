#include <stdio.h>

typedef int liczba;

typedef struct Wioska {
	int x;
	int y;
	int pop;
} Wioska;

int main(){

	liczba a;
	liczba b;

	Wioska w1;
	Wioska * p2;

	p2 = &w1;

	w1.x = 10;
	w1.y = 7;

	p2->x = 100;

	printf( "Wioska ma wspolrzedne: %d,%d\n", w1.x, w1.y );

}

