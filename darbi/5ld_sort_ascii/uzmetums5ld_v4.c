#include <stdio.h>


int main()
{
	int text[25]={},i=0,j;
	char a[25];
	int max=0,min;

	printf("Ludzu, ievadiet simbolu rindu: ");
	scanf("%[^\n]s", &a);

	while(a[i]!='\0')
	{
		text[i]=a[i]; //char vertibas saglaba int test[], iegust ascii
		i++; //i=ievadito simbolu skaits
	}

	printf("Jusu ievaditais teksts: %s \n",a);
	printf("Jusu ievadita teksta ANSII ekvivalents: ");

	for(j=0;j<i;j++)
	{
		printf("%d ",text[j]); //print ascii vertibas
	}
	printf("\n");

	for(j=0;j<i;j++)
	{
		min = text[0];

		if(text[j] > max) //atrod max ascii vertibu
		{
			max = text[j];
		}

		if(text[j] <= min) //atrod min ascii vertibu
		{
			min = text[j];
		}
	}

	printf("Max pec ASCII ir %d \n",max);
	printf("Min pec ASCII ir %d \n",min);

	//simbols ar min un max value (CHECK)
	//videjo
	//mediana
	//moda vai modas
	//augosa seciba pec ansii
	//norada zem uzd vertibas

return 0;
}
