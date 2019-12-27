#include<stdio.h>

void main()
{
int number1, number2, yes_no;
yes_no=1;
while(yes_no && (i<5) )
	{
	i=i+1; //i++; i+=1; vienadie apzimejumi
	printf("Cienījamais lietotāj, lūdzu ievadiet 1.skatli: ");
	scanf("%d",&number1);
	printf("Cienījamais lietotāj, lūdzu ievadiet 2.sakaitli: ");
	scanf("%d",&number2);

if (number1 > number2)
	printf("Tavs 1.skaitlis %d ir >  par 2.skaitlis %d\n",number1,number2);
	//break;
	printf("Cienijamais lietotaj, vai velaties turpinat?");
	printf(" (si bija %d. reize)",i++);
	printf(" (ja - jebkurs skaitlis, iznemot 0)\n");
	scanf("%d",&yes_no);
	}

if (number1 < number2)
		printf("Tavs 1.skaitlis %d ir < par 2.skaitlis %d\n",number1,number2);
	else
		printf("Tavs 1.skaitlis %d ir = ar 2.skaitlis %d\n",number1,number2);
      //	}
		//var likt {}, var ari nelikt
}
