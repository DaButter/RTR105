#include <stdio.h>
#include <math.h>

void main(){

	int k,n=2,m=1;
	float a=0.,b=0,delta_x=0; //ievaditie lielumi
	float int1=0.,int2=0.,int3=0.,h;


	printf("lūdzu, ievadi sākuma robežu: ");
	scanf("%f", &a);

	printf("lūdzu, ievadi beigas robežu: ");
	scanf("%f", &b);

	printf("lūdzu, ievadi precizitāti: ");
	scanf ("%e", &delta_x);

	int2=(b-a)*(sin(sqrt(a))*sin(sqrt(a))+sin(sqrt(b))*sin(sqrt(b)))/2.;

	while(fabs(int2 - int1)>delta_x)
	{
		n*=2;
		h=(b-a)/n;
		int1=int2;
		int2=0.;

		for(k=0;k<n;k++)
		{
			int2+=h*sin(sqrt(a+(k+0.5)*h))*sin(sqrt(a+(k+0.5)*h));
		}
	}

	printf("\nintegral, using rectangle rule: %.5f\n",int2);

 n =2;
 int1 =0;
 int2 = (b-a)*(sin(sqrt(a))*sin(sqrt(a))+sin(sqrt(b))*sin(sqrt(b)))/2.;
 while(fabs(int2 - int1)>delta_x){
  n*=2;
  h=(b-a)/n;
  int1=int2;
  int2=0.;
 for(k=1;k<n;k++) int2+=sin(sqrt(a+(k)*h));
 int2+=(sin(sqrt(b))*sin(sqrt(b))+sin(sqrt(a))*sin(sqrt(a)))/2;
 int2*=h;
 }
 printf("integrālis, aprēķināts ar trapeču metodi: %.5f\n",int2);

        int1 =0;
        int2=(b-a)*(sin(sqrt(a))*sin(sqrt(a))+sin(sqrt(b))*sin(sqrt(b)))/2.;

        while(fabs(int2 - int1)>delta_x)
        {
                m*=2;
                n=2*m;
                h=(b-a)/n;
                int1=int2;
                int2=0.;

                for(k=1;k<=m-1;k++)
                {
                        int2+=2.*(2*sin(sqrt(a+(2*k-1)*h))+sin(sqrt(a+2*k*h)));
                        int2+=sin(sqrt(a))*sin(sqrt(a))+sin(sqrt(b))*sin(sqrt(b))+4*sin(sqrt(b-h))*sin(sqrt(b-h));
                        int2*=h/3;
                }
        }

        printf("integral, using Simpson\'s rule: %.5f\n",int2);


}




