
#include <stdio.h>
#include <math.h>

float f(float x); // integral -1 to 1 ( exp(-x) if xE[-1;0) || exp(x) if xE[0;1] ), calculate the area below graph and make gnuplot with colored area.

void main(){

	int k,n=2,m=1,itr;
	float a=0.,b=1, delta_x=0.0001; //noteiktas vertibas prieks x>=0
	float c=-1., d=-0.0001; // prieks x<0
	float h, int1=0.,int2=0.,inty2=0.;

	int2 = (b-a)*(f(a)+f(b))/2.; //kad x>=0 prieks exp(x)
	inty2 = (b-a)*(exp(-a)+exp(-b))/2; //kad x<0 prieks exp(-x)

	FILE *fh = fopen("./abc.dat", "wb");

	//integralim -1 lidz -0.0001 (-delta_x) ar exp(-x)
	while(fabs(inty2 - int1)>delta_x)
	{
		n*=2; //c=-1 d=-0.0001
		h=(d-c)/n;
		int1=inty2;
		inty2=0.;

	        for( k=0 ; k<n ; k++ )
       		{
                	inty2+=h*exp(-(c+(k+0.5)*h));
               		itr++;
       		}
	}

	int1=0.;
	n=2;
	m=1;

	// no jauna integralim 0 lidz 1 ar exp(x)
	while(fabs(int2 - int1)>delta_x) //prieks x>=0
	{
 		n*=2;
 		h=(b-a)/n;
 		int1=int2;
		int2=0.;

 		for( k=0 ; k<n ; k++ )
 		{
			int2+=h*f(a+(k+0.5)*h);
			itr++;
		}
	}


	printf("\nAprekinatais integralis ar taisnstura metodi: %.5f\n\n",inty2+int2);
	fprintf(fh,"\nAprekinatais integralis ar taisnstura metodi: %.5f\n\n",inty2+int2);

	printf("Dalijumu skaits: %d \n\n",itr);
	fprintf(fh,"Dalijumu skaits: %d \n\n",itr);

	fclose(fh);

 }

float f(float x){ //f(x) funcija, kura f(x)=exp(x)
	float y1;

	y1 = exp(x); //ja x>=0, tad izmanto šo

 return y1;

}
