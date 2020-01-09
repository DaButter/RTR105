#include <stdio.h>


int main()
{
	int text[25]={},i=0,j;
	char a[25];
	int max,min,sum=0;

	printf("Ludzu, ievadiet simbolu rindu: ");
	scanf("%[^\n]s", &a);

	while(a[i]!='\0')
	{
		text[i]=a[i]; //char vertibas saglaba int test[], iegust ascii
		i++; //ievadito simbolu skaits
	}

	printf("Jusu ievaditais teksts: %s \n",a);
	printf("Jusu ievadita teksta ASCII ekvivalents: ");

	for(j=0;j<i;j++)
	{
		printf("%d ",text[j]); //print ascii vertibas
	}
	printf("\n");

	max = text[0];
	min = text[0];

	for(j=0;j<i;j++)
	{

		if(text[j] > max) //atrod max ascii vertibu
		{
			max = text[j];
		}

		if(text[j] < min) //atrod min ascii vertibu
		{
			min = text[j];
		}
	}


	printf("Max pec ASCII ir %d \n",max);
	printf("Min pec ASCII ir %d \n",min);

	for(j=0;j<i;j++)
	{
		sum = sum + text[j]; //visu simbolu ASCII summa
	}

	sum = sum /i; //i ir elementu skaits, sum ir summa, izdalot dabuj videejo

	printf("All symbol average is: %d \n",sum);


	//moda = dala rindu skaitu uz 2 un atrod medianas rindu sortotajaa

	//1.sort no mazaka uz lielako
	//2.atrast medianu
	//3.moda
	//4.simboli


return 0;
}
 //GALVENAIS -  ASCII integer vieta atrast, ka ievietot atbilstosos simbolus pec nummuriem
