#include <stdio.h>

int main(){

	char *napis = "ground";

	int x = 1970238055;

	printf("%08x\n", x );

	printf("[%s]\n", napis );
	printf("[%p]\n", napis );
	printf("[%p]\n", (int*)napis );
	printf("[%d]\n", *(int*)napis );
}
