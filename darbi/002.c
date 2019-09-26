# include <stdio.h>
# include <limits.h>

int main ()
{
	long int a = 50000; // 50 K
	long int b = 1000000; //1 M
	long int c = a * b; 

	printf ("int datu tipa izmers ir: %d baiti \n", sizeof (int) );
	printf (" Aprekinaam a un b reizinajumu :\n" );
	printf ("a = %d, b = %d \n", a, b);
	printf ("c = a * b = %d * %d \n", a,b,c ); //rezultats uz ekrana
	printf ("rezultaataa: %d \n", c );
}
