#include <stdio.h>


int main()
{
	int text[25]={},i=0,j;
	char a[25];
	int max,min;

	printf("Ludzu, ievadiet simbolu rindu: ");
	scanf("%[^\n]s", &a);

	while(a[i]!='\0')
	{
		text[i]=a[i]; //char vertibas saglaba int test[], iegust ascii
		i++;                                               //i=ievadito simbolu skaits
	}

	printf("Jusu ievaditais teksts: %s \n",a);
	printf("Jusu ievadita teksta ANSII ekvivalents: ");

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

	max = maxx;
	min = minn;

	printf("Max pec ASCII ir %s \n",maxx); //kaa ievadit atbilstoso simbolu?
	printf("Min pec ASCII ir %s \n",minn);

//	for(j=0;j<i;j++)
//	{
//		sum=t
//	}

	//videjo
	//mediana
	//moda vai modas
	//augosa seciba pec ansii
	//norada zem uzd vertibas

return 0;
}
