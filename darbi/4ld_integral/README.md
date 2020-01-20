<!-- https://help.github.com/en/github/writing-on-github/basic-writing-and-formatting-syntax -->
# Laboratorijas darbs Nr.4 atskaite - integral

## Teorija



### Kods
```
#include <stdio.h>
#include <math.h>

void main(){

	int j=2,k=1;

	float a=0.,b=0,dx; //ievaditie lielumi

	float intgr1=0.,intgr2=0.,intgr3=0.,h; //h-augst un izvades integrali


	printf("Ludzu ievadiet sakuma robezu x0: ");
	scanf("%f", &a);

	printf("Ludzu ievadiet beigu robezu x1: ");
	scanf("%f", &b);

	printf("Ludzu ievadiet precizitati delta_x(dx): ");
	scanf ("%e", &dx);

	intgr2=(b-a)*(sin(sqrt(a))*sin(sqrt(a))+sin(sqrt(b))*sin(sqrt(b)))/2.;

	while(fabs(intgr2-intgr1)>dx)
	{
		j=2*j;
		h=(b-a)/j;
		intgr1=intgr2;
		intgr2=0.;

		for(int i=0;i<j;i++)
		{
			intgr2=intgr2+h*sin(sqrt(a+(i+0.5)*h))*sin(sqrt(a+(i+0.5)*h));
		}
	}

	printf("\nIntegrala vertiba izmantojot taisnstura metodi: %.5f \n\n",intgr2);

	j=2;
	intgr1=0;
	intgr2=(b-a)*(sin(sqrt(a))*sin(sqrt(a))+sin(sqrt(b))*sin(sqrt(b)))/2.;

	while(fabs(intgr2-intgr1)>dx)
	{
		j=j*2;
		h=(b-a)/j;
		intgr1=intgr2;
		intgr2=0.;

		for(int i=1;i<j;i++)
		{
			intgr2+=sin(sqrt(a+(i)*h));
		}

		intgr2=intgr2+(sin(sqrt(b))*sin(sqrt(b))+sin(sqrt(a))*sin(sqrt(a)))/2;
		intgr2=intgr2*h;
	}

	printf("Integrala vertiba izmantojot trapeces metodi: %.5f \n\n",intgr2);

        intgr1=0;
        intgr2=(b-a)*(sin(sqrt(a))*sin(sqrt(a))+sin(sqrt(b))*sin(sqrt(b)))/2.;

        while(fabs(intgr2-intgr1)>dx)
        {
                k=2*k;
                j=2*k;
                h=(b-a)/j;
                intgr1=intgr2;
                intgr2=0.;

                for(int i=1;i<=k-1;i++)
                {
                        intgr2=intgr2+2.*(2*sin(sqrt(a+(2*i-1)*h))+sin(sqrt(a+2*i*h)));
                        intgr2=intgr2+sin(sqrt(a))*sin(sqrt(a))+sin(sqrt(b))*sin(sqrt(b))+4*sin(sqrt(b-h))*sin(sqrt(b-h));
                        intgr2=intgr2*h/3;
                }
        }

        printf("Integrala vertiba izmantojot Simpsona likumu: %.5f \n\n",intgr2);

}
 
```  

### Rezultāts
```
Ludzu ievadiet sakuma robezu x0: 1
Ludzu ievadiet beigas robežu x1: 5
Ludzu ievadiet precizitati delta_x(dx): 2

Integrala vertiba izmantojot taisnstura metodi: 3.52383

Integrala vertiba izmantojot trapeces metodi: 3.54761

Integrala vertiba izmantojot Simpsona likumu: 3.51982
```

### Analīze


### Screenhoti no wolframalpha

![WolframAlpha](https://github.com/DaButter/RTR105/blob/master/darbi/4ld_integral/wolframalpha_integral1to5.png)

### Funkcijas un tā integrāļa grafiks

![graph](https://github.com/DaButter/RTR105/blob/master/darbi/4ld_integral/integral_graph.png)

