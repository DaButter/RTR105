#include <stdio.h>
#include <math.h>

int main() {

  float a,b,c,fa,fb,x,delta_x;
  int i=0;

  printf("\nLudzu, ievadiet sakuma robezu: ");
  scanf ("%f", &a);

  printf("Ludzu, ievadiet beigu robezu: ");
  scanf ("%f", &b);

  printf("Ludzu, ievadiet precizitati: ");
  scanf ("%e", &delta_x);

  printf("Ludzu, ievadiet funkcijas vertibu, kuram aprekinat x: ");
  scanf ("%f", &c);
  printf("\n\n");

  fa = sin(sqrt(a))*sin(sqrt(a))-c;
  fb = sin(sqrt(b))*sin(sqrt(b))-c;

  printf("sin(sqrt(%7.3f))^2 - %7.3f=%7.3f\t\t\t\t\t\t\t",a,c,fa);
  printf("sin(sqrt(%7.3f))^2 - %7.3f=%7.3f\n",b,c,fb);

 while ((b-a)>delta_x)
 {
 	 x = (a+b)/2.;

  if(fa*(sin(sqrt(x))*sin(sqrt(x))-c)>0)
  {

	   a = x;
  }

  else
         b = x;
 	 printf("sin(sqrt(%7.3f))^2 - %7.3f=%7.3f\t",a,c,fa);
 	 printf("sin(sqrt(%7.3f))^2 - %7.3f=%7.3f\t",b,c,fb);
  	 printf("sin(sqrt(%7.3f))^2 - %7.3f=%7.3f\n",x,c,sin(sqrt(x))*sin(sqrt(x))-c);
   	 i++;
 }

	 printf("\nIteraciju skaits: %d\n",i);
	 printf("Sakne atrodas pie x = %.5f, jo sin(sqrt(x))^2 ir %.3f\n",x,sin(sqrt(x)));

	 return 0;

}
