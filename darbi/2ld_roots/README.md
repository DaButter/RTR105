<!-- https://help.github.com/en/github/writing-on-github/basic-writing-and-formatting-syntax -->
# 						Laboratorijas darbs Nr.2 atskaite - roots

## Teorija

Izmantojot Dihotomijas metodi, iespējams atrast x vertibu zinot y vertību pēc principa f(x) = c ------> f(x)-c = 0;

### Kods
```
#include <stdio.h>
#include <math.h>

int main() {

  float a,b,c,fa,fb,x,delta_x;
  int i=0;

  printf("Ludzu, ievadiet sakuma robezu: ");
  scanf ("%f", &a);

  printf("Ludzu, ievadiet beigu robezu: ");
  scanf ("%f", &b);

  printf("Ludzu, ievadiet precizitati: ");
  scanf ("%e", &delta_x);

  printf("Ludzu, ievadiet y, kuram aprekinat x (c vertiba): ");
  scanf ("%f", &c);

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

```

### Rezultāts
```

Ludzu, ievadiet sakuma robezu: 23
Ludzu, ievadiet beigu robezu: 234
Ludzu, ievadiet precizitati: 4
Ludzu, ievadiet funkcijas vertibu, kuram aprekinat x: 5


sin(sqrt( 23.000))^2 -   5.000= -4.007							sin(sqrt(234.000))^2 -   5.000= -4.840
sin(sqrt(128.500))^2 -   5.000= -4.007	sin(sqrt(234.000))^2 -   5.000= -4.840	sin(sqrt(128.500))^2 -   5.000= -4.111
sin(sqrt(181.250))^2 -   5.000= -4.007	sin(sqrt(234.000))^2 -   5.000= -4.840	sin(sqrt(181.250))^2 -   5.000= -4.390
sin(sqrt(207.625))^2 -   5.000= -4.007	sin(sqrt(234.000))^2 -   5.000= -4.840	sin(sqrt(207.625))^2 -   5.000= -4.072
sin(sqrt(220.812))^2 -   5.000= -4.007	sin(sqrt(234.000))^2 -   5.000= -4.840	sin(sqrt(220.812))^2 -   5.000= -4.437
sin(sqrt(227.406))^2 -   5.000= -4.007	sin(sqrt(234.000))^2 -   5.000= -4.840	sin(sqrt(227.406))^2 -   5.000= -4.655
sin(sqrt(230.703))^2 -   5.000= -4.007	sin(sqrt(234.000))^2 -   5.000= -4.840	sin(sqrt(230.703))^2 -   5.000= -4.754

Iteraciju skaits: 6
Sakne atrodas pie x = 230.70312, jo sin(sqrt(x))^2 ir 0.496

```

### Analīze




### Funkcijas sin(sqrt(x))^2 ar atzīmētu aprēķināto sakni
![Grafiks un punkts](https://github.com/DaButter/RTR105/blob/master/darbi/2ld_roots/sakne2.png)

