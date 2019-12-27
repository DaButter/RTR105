#include <stdio.h>
#include <time.h>

void main()
{
	int number;

	clock_t start_t, end_t, total_t;
	start_t = clock();

	printf("Cienījamais lietotāj, lūdzu ievadiet skatli: ");
	scanf("%d",&number);

	if ((number%2)==0) //izmanto atlikumu dalījumā, atl viends ar 1, tad nepāra
		printf("Tavs skaitlis %d ir pāra skaitlis\n",number);
	else
		printf("Tavs skaitlis %d ir nepāra skaitlis\n",number);

	end_t = clock();
	//total_t = (double)(end_t - start_t) / CLOCK_PER_SEC;
	printf("Aprēķins ar %c  aiznema no %ld līdz %ld -> %ld\n",37,start_t,end_t);

	start_t = clock();

	if((number<<31>>31)) //bīdīsana ar bitiem pa kreisi/labi
		printf("Tavs skaitlis %d ir nepāra skaitlis\n",number);
	else
		printf("Tavs skaitlis %d ir pāra skaitlis\n",number);
	end_t = clock();
	printf("Aprēķins ar << un >>  aiznema no %ld līdz %ld -> %ld\n",start_t,end_t);
	

}
