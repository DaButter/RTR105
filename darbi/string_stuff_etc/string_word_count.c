#include <stdio.h>
#include <string.h>

int main ()
{
	char str[100];
	int i, totalwords;
	totalwords = 1;

	printf("\n Ievadiet vardus: ");
	gets(str);

	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
		{
			totalwords++;
		}
	}

	printf("\n Ievadito vardu skaits saja teikuma (%s) ir: %d \n",str,totalwords);
	return 0;
}
