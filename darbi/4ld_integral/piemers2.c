#include <stdio.h>
#include <math.h>

void main(){

	int n=2,m=1;

	float a=0.,b=0,dx; //ievaditie lielumi

	float intgr1=0.,intgr2=0.,intgr3=0.,h; //h-augst


	printf("Ludzu, ievadi sakuma robezu x0: ");
	scanf("%f", &a);

	printf("Ludzu, ievadi beigu robezu x1: ");
	scanf("%f", &b);

	printf("Ludzu, ievadi precizitati delta_x(dx): ");
	scanf ("%e", &dx);

	intgr2=(b-a)*(sin(sqrt(a))*sin(sqrt(a))+sin(sqrt(b))*sin(sqrt(b)))/2.;

	while(fabs(intgr2-intgr1)>dx)
	{
		n=2*n;
		h=(b-a)/n;
		intgr1=intgr2;
		intgr2=0.;

		for(int i=0;i<n;i++)
		{
			intgr2=intgr2+h*sin(sqrt(a+(i+0.5)*h))*sin(sqrt(a+(i+0.5)*h));
		}
	}

	printf("\nIntegrala vertiba izmantojot taisnstura metodi: %.5f \n\n",intgr2);

	n=2;
	intgr1=0;
	intgr2=(b-a)*(sin(sqrt(a))*sin(sqrt(a))+sin(sqrt(b))*sin(sqrt(b)))/2.;

	while(fabs(intgr2-intgr1)>dx)
	{
		n*=2;
		h=(b-a)/n;
		intgr1=intgr2;
		intgr2=0.;

		for(int i=1;i<n;i++)
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
                m=2*m;
                n=2*m;
                h=(b-a)/n;
                intgr1=intgr2;
                intgr2=0.;

                for(int i=1;i<=m-1;i++)
                {
                        intgr2=intgr2+2.*(2*sin(sqrt(a+(2*i-1)*h))+sin(sqrt(a+2*i*h)));
                        intgr2=intgr2+sin(sqrt(a))*sin(sqrt(a))+sin(sqrt(b))*sin(sqrt(b))+4*sin(sqrt(b-h))*sin(sqrt(b-h));
                        intgr2=intgr2*h/3;
                }
        }

        printf("Integrala vertiba izmantojot Simpsona likumu: %.5f \n\n",intgr2);

}




