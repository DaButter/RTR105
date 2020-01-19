							1ld_series atskaite
							
Code

	#include <stdio.h>
  #include <math.h> 
  
  void main(){
  
  int k;
	long double Sum,a,x,y;

	//series vizualizacijas bloks;

	printf("\n\n\t   500 \n"); // ar \t taulaciju nocentre

	printf("\t -------- \n");

	printf("\t \\                (k+1)   k   (2k-1)\n"); //pakapes

	printf("\t  \\          (-1)^     *x^ *2^\n"); //dalas augsa

	printf(" f(x) =\t   |      ----------------------------   = (sin(sqrt(x)))^2\n"); //dalas vidus

	printf("  \t  /\t           (2*k)!"); //dalas apaksa

	printf("\n\t /\n"); //

	printf("\t -------- \n");

	printf("\t   k=1\n\n");

	// x ievadisana
	printf("Ievadiet x vertibu, kurai velaties iegut (sin(sqrt(x)))^2: ");
	scanf("%Lg",&x);


	y = sin(sqrt(x))*sin(sqrt(x));

	printf("\nIzmantojot math: f(%.5Lg)=(sin(sqrt(%.5Lg)))^2=%.5Lg\n",x,x,y); //izvada y izmantojot math
	printf("\n");

	//SERIES SUM bloks

	a=x;
	Sum = a;
	k=1; //k sakas no 1

	printf("Izmantojot series summu: \n\n"
	while(k<501)
	{

		k++;
		a = a* (-4)*x /((2*k)*(2*k-1)); //a*R
		Sum = Sum + a; //SUM

	 if (k==499||k==500)
		{
	 		printf("%d.   |    X=%.5Lg\t|\ta=%.5Lg\t|\tS=%.5Lg\t\n", k, x, a, Sum);
		}
	}

	printf("\nRekurences reizinatajs:\n\n");

	//REKURENCES reizinataja vizualizacijas bloks

	printf("           (-4)*x\n");
	printf(" R = -------------------- \n");
	printf("        (2*k)*(2*k-1)\n");

	printf("\n");}


Short description

Result

Analysis

Function graph
