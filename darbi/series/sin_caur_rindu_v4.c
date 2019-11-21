//ar ciklu

#include<stdio.h>
#include<math.h>

void main() {

 double x = 2.05, y, a, S,k;

 y = sin(x);
 printf("y = sin(%.2f) = %.2f \n",x,y);

 a = pow(-1,0)*pow(x,2*0+1)/(1.);
 S = a;
 printf("%.2f\t%.2f\t%8.2f\n",x,a,S);
 k++;

 a = a * (-1)*x*x/((2*k)*(2*k+1)); //2,3 //rindas vienadas, k++
 S = S + a;
 printf("%.2f\t%.2f\t%8.2f\n",x,a,S);

 a = a * (-1)*x*x/((2*k)*(2*k+1)); //4,5 //problemas ar a vertibu talak
 S = S + a;
 printf("%.2f\t%.2f\t%8.2f\n",x,a,S);

 a = a * (-1)*x*x/((2*k)*(2*k+1)); //6,7
 S = S + a;
 printf("%.2f\t%.2f\t%8.2f\n",x,a,S);

}

