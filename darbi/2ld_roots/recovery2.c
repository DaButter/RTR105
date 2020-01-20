#include <stdio.h>
#include <math.h>

int main() {
 float a,c ,b ,x ,delta_x,funkca, funkcb, funkcx;
 int i=0;

  printf("Ludzu, ievadiet sakuma robezu: ");
  scanf ("%f", &a);

  printf("Ludzu, ievadiet beigu robezu: ");
  scanf ("%f", &b);

  printf("Ludzu, ievadiet precizitati: ");
  scanf ("%e", &delta_x);

  printf("Ludzu, ievadiet y, kuram aprekinat x: ");
  scanf ("%f", &c);

 // funkca = (1+a)*exp(a) - c; funkcb = (1+b)*exp(b) - c;

 funkca = sin(sqrt(a))*sin(sqrt(a)) -c;
 funkcb = sin(sqrt(b))*sin(sqrt(b)) -c;

  printf("sin(sqrt(%7.3f))^2 - %7.3f =%7.3f\t\t\t\t\t\t\t",a,c,funkca);
  printf("sin(sqrt(%7.3f))^2 - %7.3f =%7.3f\n",b,c,funkcb);

 while ((b-a)>delta_x){
  x = (a+b)/2.;
  if(funkca*(sin(sqrt(x))*sin(sqrt(x))-c)>0)
   a = x;
  else
   b = x;
  printf("sin(sqrt(%7.3f))^2 - %7.3f =%7.3f\t",a,c,funkca);
  printf("sin(sqrt(%7.3f))^2 - %7.3f =%7.3f\t",b,c,funkcb);
  printf("sin(sqrt(%7.3f))^2 - %7.3f =%7.3f\n",x,c,sin(sqrt(x))*sin(sqrt(x))-c);
   i++;
 }

 printf("\nIteraciju skaits: %d\n",i);
 printf("Sakne atrodas pie x=%.5f, jo sin(sqrt(x))^2 ir %.3f\n",x,sin(sqrt(x)));
 return 0;
}
