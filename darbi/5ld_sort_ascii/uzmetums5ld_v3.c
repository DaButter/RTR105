#include <stdio.h>

int main()
{
	int test[25]={},i=0,j;
	char a[25];

	printf("Ludzu, ievadiet simbolu rindu: ");
	scanf("%[^\n]s", &a);

	while(a[i]!='\0')
	{
		test[i]=a[i];
		i++;
	}

	printf("Jusu ievaditais teksts: %s \n",a);
	printf("Jusu ievadita teksta ANSII ekv: ");

	for(j=0;j<i;j++)
	{
		printf("%d ",test[j]);
	}
	printf("\n");

return 0;
}
