#include <stdio.h>
#include <math.h>

void main() {
 long double x=0, y, a, S;
 int k=0;

 printf("\n\n\n \t\t  500\n");

 printf("\t\t-------- \n");

 printf("\t\t\\                (k+1)   k   (2k-1)\n"); //pakapes

 printf("\t\t \\          (-1)^     *x^ *2^\n"); //dalas augsa

 printf("\tf(x)=\t  |     -----------------------------   = (sin(sqrt(x)))^2\n"); //dalas vidus

 printf("\t\t /\t           (2*k)!"); //dalas apaksa

 printf("\n\t\t/\n"); //

 printf("\t\t-------- \n");

 printf("\t\t  k=1\n");

//zimeseanas bloka END

 printf("\n\t Lūdzu ievadiet izvēlēto x vērtību kurai velaties iegūt (sin(sqrt(x)))^2 vērtību: ");
 scanf("%Lg",&x);

//matematiskās daļas apreķins

 y = sin(sqrt(x))*sin(sqrt(x)); //tas ir ka ^2

 printf("\n\t\t\t\t\tf(%.5Lg)=(sin(sqrt(%.5Lg)))^2=%.5Lg\n",x,x,y);
 printf("\n");

 a=sqrt(x);
 S=a;
 //k sakas no 1
 for(k=1;k<501;k++) //te k=1
	{
	//k++; //a = x (!!!)
//	a = a*(-4)/((2*k)*(2*k-1)*x);

	a =a*(-4)/((2*k)*(2*k-1)*x); //APREKINAT VELREIZ R!!
	S = S+a; //SUM

 if (k==500||k==499){
 printf("\t|\t%d.   |    X=%.5Lg\t|\ta=%.5Lg\t|\tS= %.5Lg\t   |\n", k, x, a, S);
  }
 }

 printf("\n\n");
}
