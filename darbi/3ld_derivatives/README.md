<!-- https://help.github.com/en/github/writing-on-github/basic-writing-and-formatting-syntax -->
# Laboratorijas darbs Nr.3 derivatives - atskaite

## Teorija

Funkcijas atvasinājums ir oriģinālās funkcijas izmaiņas atspoguļojums. Mana funkcija sin(sqrt(x))^2 tika atvasināta vienkārši un divkārši pēc klasiskajām matemātikas atvasināšanas metodēm, ko mācījāmies 1.kursa 1.semestrī.  

### Kods
```
#include <stdio.h>
#include <math.h>

void saving(int k,float dx,float b, float a);
void main(){

  int k;
  float a,b,x,dx;

  printf("Ludzu, ievadiet sakuma robezu x0: ");
  scanf ("%f", &a);

  printf("Ludzu, ievadiet beigu robezu x1: ");
  scanf ("%f", &b);

  printf("Ludzu, ievadiet precizitati delta_x (dx): ");
  scanf ("%e", &dx);

  x=a;
  k=0;
  while(x<=b)
  {
	  k++;
	  x=x+dx;
  }

 saving(k,dx,a,b);
}

double f(double x, double x1,double dx){

	float y;

	y= (x1-x)/dx;

 return y;
}

void saving(int k,float dx,float a, float b){

	int i;
	float x[k],y1[k],y2[k],y3[k],y4[k],y5[k];

	FILE *fp = fopen("./atvasinajums.dat", "w");
	fprintf(fp,"\tx\t\t f(x)\t\tf\'(x)\t\tf\"(x)\n");


	for(i=0;i<k;i++)
	{
		if (i==0)
		{
 			 x[i]=a;
		}
 	else
 		x[i] = x[i-1] + dx;
		y1[i] = sin(sqrt(x[i]))*sin(sqrt(x[i])); //originala funkcija
		y2[i] = sin(sqrt(2*x[i]))/(2*sqrt(x[i])); //1k atvasinajums
		y3[i] = (2*sqrt(x[i])*sin(sqrt(2*x[i]))-sin(sqrt(2*x[i])))/(4*x[i]*sqrt(x[i])); //2k atvasinajums
	}

	for(i=0;i<k;i++)
	{
		fprintf(fp,"%10.2f\t%13.2f\t%13.2f\t%13.2f\n",x[i],y1[i],y2[i],y3[i]);
	}

 fclose(fp);

}

```

### Rezultāts
```
//Programma izvada:

Ludzu, ievadiet sakuma robezu x0: 1
Ludzu, ievadiet beigu robezu x1: 10
Ludzu, ievadiet precizitati delta_x (dx): 1

//Programma ievada .dat failā:

	x		 f(x)		f'(x)		f"(x)
      1.00	         0.71	         0.49	         0.25
      2.00	         0.98	         0.32	         0.15
      3.00	         0.97	         0.18	         0.08
      4.00	         0.83	         0.08	         0.03
      5.00	         0.62	        -0.00	        -0.00
      6.00	         0.41	        -0.06	        -0.02
      7.00	         0.23	        -0.11	        -0.03
      8.00	         0.09	        -0.13	        -0.04
      9.00	         0.02	        -0.15	        -0.04
     10.00	         0.00	        -0.15	        -0.04

```

### Analīze


### Attēls

![Atvasinajumu grafiks](https://github.com/DaButter/RTR105/blob/master/darbi/3ld_derivatives/grafiks_by_gnuplot.png)

