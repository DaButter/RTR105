#include<stdio.h>

void main()
{
int number1, number2, yes_no;
yes_no=1;
while(yes_no)
	{
	printf("Cienījamais lietotāj, lūdzu ievadiet 1.skatli: ");
	scanf("%d",&number1);
	printf("Cienījamais lietotāj, lūdzu ievadiet 2.sakaitli: ");
	scanf("%d",&number2);

if (number1 > number2)
	printf("Tavs 1.skaitlis %d ir >  par 2.skaitlis %d\n",number1,number2);
	//break;
	printf("Cienijamais lietotaj, vai velaties turpinat?");
	printf(" (ja - jebkurs skaitlis, iznemot 0)\n");
	scanf("%d",&yes_no);
	}
	printf("Sis txt paradisies jebkura gadijuma\n"); //paradas darba beigas txt
}
