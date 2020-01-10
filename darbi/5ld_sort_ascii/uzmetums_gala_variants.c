#include <stdio.h> //nonemt garumzimes, izmaintit printf tesktus, izkarotojumu darbibam
#include <string.h>

int main()
{
	char input[300];

	int tmp;

	int lenght;
	int sum=0;
	int i,j;
	long int max,min; //izmantojot vienkarsi int, min vertiba lagoja
	// radija -1483845 utml.

	int medi;

	printf("\nLudzu ievadiet simbolu rindu: "); //pienem max 40 simbolus
	scanf("%[^\n]", input);
	printf("\n");

	lenght=strlen(input); //pieskir rindas garumu

/*	for(j=0;j<lenght;j++)
	{
		if((int)input[j] < 33)
		{
			printf("Lugums ievadit tikai burtus");
			break;
		}
	} */

	for (j=0;j<lenght;j++) //sakarto augosa seciba masivu
	{
		for (i=0;i<lenght-1;i++)
		{
			if (input[i]>input[i+1])
			{
				tmp =input[i+1];
				input[i+1] = input[i];
				input[i]= tmp;
			}
		}
	}

	min, max =(int)input[0]; //uzskata 1 elementu ka max un min

	for(i=0;lenght>i;i++)
	{
			if ((int)input[i] > max ) //salidzina 1 elementu ar parejiem, ta noskaidro max un min elementu
			{
				max = (int)input[i];
			}

			if ((int)input[i] < min)
			{
				min = (int)input[i];
			}

		sum = sum+(int)input[i]; //sasumme visus elementus kopa ka int
	}

	printf("Mazākā vērtība pēc ASCII tabulas ir %d \n", min);

	printf("Lielākā vērtība pēc ASCII tabulas ir %d \n", max);

	printf("Vidējā vērtība ASCII sistēmā ir %d \n",sum/lenght);

	printf("Ievadītas rindas mediana pēc ASCII sistēmas ir %d \n", input[lenght/2]);

 //modas apreiķins un izdruka

/* j=0;

 for(i=0;lenght>i;i++)
 {
	if(input[i]==input[i+1])
	{
		j++;
	}

 else if (input[i] != input[i+1])
 {
	if(j>max)
	{
		max=j;
		j=0;
	}
 }


 j=0;
}
 for(i=0;lenght>i;i++)
 {
	if(input[i]==input[i+1])
	{
		j++;
	}

 	else if(input[i] != input[i+1])
	{
  		if (max==j)
		{
			printf("Ivadītās rindas moda ir %d \n", input[i]);
		}
		j=0;
	}

 }
*/

 //MODAS ALGORITMS NERABOTAJET SHAS

 //alfabētiskas secības izdruka

	printf("Print alfabetiska seciba: ");

	for(i=0;i<lenght ;i++)
	{
		printf("%c ",input[i]);
	}
	printf("\n\n");

	printf("Ievaditais simbols \t ASCII vertiba\n");
	printf("Char \t\t\t Dec \n");

	for(i=0;i<lenght;i++)
	{
		printf("%c \t\t\t %d \n",input[i], input[i] );
	}

 return 0;

}

//min, max, avg, seciba, median, moda's, viena kolonna strina -otra ASCII

