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
