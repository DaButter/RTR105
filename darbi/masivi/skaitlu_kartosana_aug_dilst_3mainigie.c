#include<stdio.h>

int n1, n2, n3;


int secibas_kartosana()
{

	if (n1 > n2 > n3) printf("Skaitli sakartoti augošā secībā: %d, %d, %d \n",n1,n2,n3);
	if (n2 > n3 > n1) printf("Skaitli sakartoti augošā secībā: %d, %d, %d \n",n2,n3,n1);
	if (n3 > n1 > n2) printf("Skaitli sakartoti augošā secībā: %d, %d, %d \n",n3,n1,n2);
	if (n2 > n1 > n3) printf("Skaitli sakartoti augošā secībā: %d, %d, %d \n",n2,n1,n3);
	if (n1 > n3 > n2) printf("Skaitli sakartoti augošā secībā: %d, %d, %d \n",n1,n3,n2);
	if (n3 > n2 > n1) printf("Skaitli sakartoti augošā secībā: %d, %d, %d \n",n3,n2,n1);

}

int main ()
{
	printf("Ievadiet 1.skaitli: \n");
	scanf("%d", &n1);

	printf("Ievadiet 2.skaitli: \n");
	scanf("%d", &n2);

	printf("Ievadiet 3.skaitli: \n");
	scanf("%d", &n3);

	secibas_kartosana();
}
