#include<stdio.h>

void main() {
 int i=0,fact=1,fact_old=1;
 for(i=1;  ;i++)
  {
  fact_old = fact;
  fact = fact * i;
   if (fact/i == fact_old)
    printf("Skaitļa %d faktoriāls ir: %d\n",i,fact);
   else
    {
    printf("Diemžēl ir sasniegta datu tipa robeža.\n");
    break;
    }
  }
 }


