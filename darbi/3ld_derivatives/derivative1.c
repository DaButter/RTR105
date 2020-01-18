#include <stdio.h>
#include <math.h>

int main(){

 long double a=0.,b=2*M_PI,x,delta_x=1.e-2; //te ir tie a un b, kkur jaatrod precizitate

 printf("\nMana funkcija ir y = sin(sqrt(x))*sin(sqrt(x))");

//TABULAS BLOKS

 printf("\n\n");
 printf("\tx\t\t\ty\t\t\ty'\t\t\ty''\n");
 x = a;

// y = sin(sqrt(x))*sin(sqrt(x)); //original funkcija
// oney = (sin(2*sqrt(x)))/(2*sqrt(x)); // pirmas k atavasinajums
// twoy = (2*sqrt(x)*cos(2*sqrt(x))-sin(2*sqrt(x)))/(4*x*sqrt(x)); //otras kartas atvasinajums

 while(x<b){

  //y = sin(x);

  printf("\t%lf\t\t%lf\t\t%lf\t\t%lf\n",x,sin(sqrt(x))*sin(sqrt(x)),(sin(2*sqrt(x)))/(2*sqrt(x)),(2*sqrt(x)*cos(2*sqrt(x))-sin(2*sqrt(x)))/(4*x*sqrt(x))); //seit savada atvasinajumus

  //printf("%10.2f\t%10.2f\n",x,y);

  x = x + delta_x;

  }
}

