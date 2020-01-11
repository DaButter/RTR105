#include <stdio.h>
#include <math.h>

void main() {
 long double x=0, y, a, S;
 int k=0;

 printf("\n\n");
 printf("\n\t\t  500\n");
 printf("\t\t______\n");
 printf("\t\t\\             2*k+1\n");
 printf("\t\t \\          x^\n");
 printf("\ty(x)=\t  |    -----------------   = sinh(x/2)\n");
 printf("\t\t /                2*k+1\n");
 printf("\t\t/      (2*k+1)!*2^\n");
 printf("\t\t------\n");
 printf("\t\t  k=0\n");


 printf("\n\n\t __________________________________________________________________________");
 printf("\n\t| Lūdzu ievadiet izvēlēto x vērtību kurai velaties iegūt sinh vērtību:     |\n\t");
 printf("|__________________________________________________________________________|\n\t|\t\t\t\t\t");
 scanf("%Lg",&x);
 printf("\t|__________________________________________________________________________|\n");
// printf("\t %Lg",x);




//matematiskās daļas apreiķins
 y = sinh(x/2);
 printf("\t|\t\t\t\ty=sinh(%.5Lg)=%.5Lg\t\t\t   |\n",x,y);
 printf("\t|__________________________________________________________________________|\n");

 a =x/2;
 S=a;//S0=a0;
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


