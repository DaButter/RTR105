#include <stdio.h>
#include <math.h>

void main() {
 long double x=0, y, a, S;
 int k=0;

 printf("\n\n\n \t\t  500\n");

 printf("\t\t-------- \n");

 printf("\t\t\\                (k+1)   k   (2k-1)\n"); //pakapes

 printf("\t\t \\          (-1)^     *x^ *2^\n"); //dalas augsa

 printf("\ty(x)=\t  |     -----------------------------   = (sin(sqrt(x)))^2\n"); //dalas vidus

 printf("\t\t /\t           (2*k)!"); //dalas apaksa

 printf("\n\t\t/\n"); //

 printf("\t\t-------- \n");

 printf("\t\t  k=1\n");

//zimeseanas bloka END

 printf("\n\t Lūdzu ievadiet izvēlēto x vērtību kurai velaties iegūt (sin(sqrt(x)))^2 vērtību: ");
 scanf("%Lg",&x);
 printf("\n");
// printf("\t %Lg",x);




//matematiskās daļas apreķins

// y = sinh(x/2);
 y = sin(sqrt(x))*sin(sqrt(x)); //tas ir ka ^2
 printf("\t|\t\t\t\ty=(sin(sqrt(%.5Lg)))^2=%.5Lg\t\t\t   |\n",x,y);
 printf("\t|__________________________________________________________________________|\n");

 a =x/2;
 S=a;

//S0=a0;
// printf("\t%8.5Lg\t%8.5Lg\t%8.5Lg\n",x, a, S);
// printf("\t|__________________________________________________________________________|\n");

while(k<501){
 k++;
 a = a *pow(x,2) /((2*k)*(2*k+1)*4);
 S= S+a;
 if (k==500||k==499){
 printf("\t|\t%d.   |    X=%.5Lg\t|\ta=%.5Lg\t|\tS= %.5Lg\t   |\n", k, x, a, S);
  }
 } //so izmainit, izdomat

 printf("\t|______________|________|_______________________|__________________________|\n");

 printf("\n\n");
}


