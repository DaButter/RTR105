#include<stdio.h>

void main()
{
	int number1, number2, yes_no;

	for( yes_no=1	; yes_no ;	)
	{
	printf("Cienījamais lietotāj, lūdzu ievadiet 1.skatli: ");
	scanf("%d",&number1);
	printf("Cienījamais lietotāj, lūdzu ievadiet 2.sakaitli: ");
	scanf("%d",&number2);

	if (number1 > number2)
	printf("Tavs 1.skaitlis %d ir >  par 2.skaitlis %d\n",number1,number2);
	//break;
	printf("Cienijamais lietotaj, va velaties turpinat?");
	printf(" (ja - jebkurs skaitlis, iznemot 0)\n");
	scanf("%d",&yes_no);
	} //si programmmai pareiz strada y un no, bet lietotajam ievadot skaitlus, neperadas tas if salidzinajums
	printf("Paldies par darbu\n"); //paradisies beigaas
}
