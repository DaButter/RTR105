#include <stdio.h>

char x;

int fun() {
	char delta = 1;
	x = x + delta;
	return x;
}

int main () {
	x = 32+15;
	printf("Pirms, %c \n", x );
	//seit paradaas burts .... jo ...

	fun();
	printf("Peec 1 reizes, %c \n", x);
	//Peec 1. reizes paraadaas burts .. jo ..

	fun ();
	printf("Peec 2 reizes, %c \n", x);
	//Peec 2. reizes paraadaas burts ... jo ..
}
