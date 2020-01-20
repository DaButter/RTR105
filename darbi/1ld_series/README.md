<!-- https://help.github.com/en/github/writing-on-github/basic-writing-and-formatting-syntax -->
# Laboratorijas darba Nr.1 atskaite - series

## Teorija

Funkcijas vērtību var aprēķināt divejādi - vienkārši aprēķinot, izmantojot matemātikas bibliotēkas. Vai arī izmantojot vienkāršas darbības (reizināšanu, dalīšanu, atņemšanu, saskaitīšanu) atbilstošajā Teilora rindā. Rindas summa ir atbilstošās funkcijas vērtība.

### Kods
```
#include <stdio.h>
#include <math.h>

void main() {

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

	printf("Izmantojot series summu: \n\n");

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

	printf("\n");

 


``` 

### Rezultāts
```
	   500 
	 -------- 
	 \                (k+1)   k   (2k-1)
	  \          (-1)^     *x^ *2^
 f(x) =	   |      ----------------------------   = (sin(sqrt(x)))^2
	  /	           (2*k)!
	 /
	 -------- 
	   k=1

Ievadiet x vertibu, kurai velaties iegut (sin(sqrt(x)))^2: 4

Izmantojot math: f(4)=(sin(sqrt(4)))^2=0.82682

Izmantojot series summu: 

499.   |    X=4	|	a=8.9076e-1962	|	S=0.82682	
500.   |    X=4	|	a=-1.4266e-1966	|	S=0.82682	

Rekurences reizinatajs:

           (-4)*x
 R = -------------------- 
        (2*k)*(2*k-1)

```

### Analīze

Palaužot programmu, tā jautā lietotājam ievadīt atbilstošo x vērtību, kādu vēlās aprēķināt funkcijai sin(sqrt(x))^2 ( kuru esmu pierakstījis kā sin(sqrt(x)) * sin(sqrt(x)) ). Pēc x vērtības ievadīšanas, programma izvada atbilstošo Teilora rindas (30.variants) vizuālo izskatu, aprēķina funkcijas vērtību divejādi: 
1.Izvada izmantojot matemātikas pakotnes, vienkārši to aprēķinot.
2.Izvada funkcijas vērtību izmantojot Teilora rindas. S = [*rezultats*]. Pirmajā kolonnā norāda, kura summēšanas reize tā ir (k vērtība), otrā kolonna izvada, kada x vertība tika izmantota (vienmēr lietotāja ievadītā), 3 kolonna norāda reizinātāja a vērtību, kāda tika izmantota atbilstošajā 499. vai 500. reizināšanas reizē ar rekurences reizinātāju. 4 kolonna izvadīta Teilora rindas summa.
Zem tabulas izvadīta rekurences reizinātāja vizuālais izskats

Funkcijas aprēķināta vērtība sakrīt ar Teilora rindas aprēķināto vērtību, līdz ar to varu sacīt, ka programma strādā korekti un ir pārskatāma.

### Dotās funkcijas sin(sqrt(x))^2 grafiks

![Funkcijas grafiks](https://github.com/DaButter/RTR105/blob/master/darbi/1ld_series/graph_image.png)
