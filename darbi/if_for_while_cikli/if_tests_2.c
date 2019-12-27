#include<stdio.h>

void main()
{
	int number1, number2;

	printf("Cienījamais lietotāj, lūdzu ievadiet 1.skatli: ");
	scanf("%d",&number1);
	printf("Cienījamais lietotāj, lūdzu ievadiet 2.sakaitli: ");
	scanf("%d",&number2);

	if (number1 > number2)
	{
		printf("Tavs 1.skaitlis %d ir >  par 2.skaitlis %d\n",number1,number2);
	}
		printf("sis txt paradisies jebkura gadijuma\n");
	//printf jaliek figūriekavās, ja ir vairakas darbibas vai nevelas teksta otro rindu šeit outputā 	
	
	if (number1 < number2)
	{
		printf("Tavs 1.skaitlis %d ir < par 2.skaitlis %d\n",number1,number2);
		printf("sis neparadisies jebkura gadijuma\n");
	}
	
	else
	{
		printf("Tavs 1.skaitlis %d ir = ar 2.skaitlis %d\n",number1,number2);
	}

}
