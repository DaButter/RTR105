#include<stdio.h>

void main()
{
	int number1, number2, yes_no;

	for(	; yes_no ;	)
	{
	printf("Cienījamais lietotāj, lūdzu ievadiet 1.skatli: ");
	scanf("%d",&number1);
	printf("Cienījamais lietotāj, lūdzu ievadiet 2.sakaitli: ");
	scanf("%d",&number2);

	if (number1 > number2)
		printf("Tavs 1.skaitlis %d ir >  par 2.skaitlis %d\n",number1,number2);
		//break;
	//prin

	}
	else
	//{
	 if (number1 < number2)
		printf("Tavs 1.skaitlis %d ir < par 2.skaitlis %d\n",number1,number2);
	else
		printf("Tavs 1.skaitlis %d ir = ar 2.skaitlis %d\n",number1,number2);
      //	}
		//var likt {}, var ari nelikt
}
