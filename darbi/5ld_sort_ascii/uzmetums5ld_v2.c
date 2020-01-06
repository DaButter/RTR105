#include <stdio.h>
#include <string.h>

int main() {

	char text[100];


	printf("Ievadiet simbolu rindu: ");
	scanf("%[^\n]s", &text);



	printf("Jusu ievaditais teksts: %s \n ", text);
	printf("Katra burta ANSII vertiba: %d \n", text);


 return 0;
}

