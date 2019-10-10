#include<stdio.h>

void main()
{
	int number;

	printf("Cienījamais lietotāj, lūdzu ievadiet skatli: ");
	scanf("%d",&number);

//	if ( number%2=0 ) 1 vienadibas zime, ta ir pieskirsanas operacija! 
//dala ar divi, parbauda, vai ir atlikums. ja \2 ir atlikums, tad nepara
	if ((number%2)==0)
		printf("Tavs skaitlis %d ir pāra skaitlis\n",number);
	else
		printf("Tavs skaitlis %d ir nepāra skaitlis\n",number);

	int remainder=number%2;
//	if (remainder=0) pieskirsanu vertibas mainigajam vienmer var izpildit, tapec si rinda nekorekta
// pec butibas tur rakstits if(1) - un atbilde vienmer nepāra
	if (remainder==0)
		printf("Tavs skaitlis %d ir pāra skaitlis\n",number);
	else
		printf("Tavs skaitlis %d ir nepāra skaitlis\n",number);
		
}
