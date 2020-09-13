#include <stdio.h>
#include <stdlib.h>


struct Wioska {
	int x;
	int y;
	int pop;
};

void init_wioska( struct Wioska *pw, int x, int y ){
	pw->x = x;
	pw->y = y;
	pw->pop = 0;
}

int main(){

	struct Wioska w1;
	struct Wioska * pw;

	printf( "w1: %p\n", &w1 );
	printf( "pw: %p\n", pw );

	pw = malloc( sizeof( struct Wioska ) * 100 );
	init_wioska( pw, 10, 20 );
	//pw = malloc( 20000 );

	printf( "pw: %p\n", pw );

	pw-=2;

	free( pw + 2 );

	printf( "pw: %p\n", pw );

	//free( pw );

}

