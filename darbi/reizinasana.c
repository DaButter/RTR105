# include <stdio.h>
# include <limits.h>

int main ()
{
	long long int a = 50000; // 50 K
	int b = 1000000; //1 M
	long long int c = a * b; 

	printf ("int datu tipa izmers ir: %d baiti \n", sizeof (int) );
	printf (" Aprekinaam a un b reizinajumu :\n" );
	printf ("a = %ld, b = %ld \n", a, b);
	printf ("c = a * b = %lld * %lld \n", a,b,c ); //rezultats uz ekrana
	printf ("rezultaataa: %lld \n", c );
}
