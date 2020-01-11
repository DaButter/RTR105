#include <stdio.h>
#include <string.h>

int main()
{
        char input[300];
	int moda;
        int sum=0;
        int i,j,a, lenght;

        long int max,min; //izmantojot vienkarsi int, min vertiba lagoja
        // radija -1483845 utml.


        printf("\nLudzu ievadiet simbolu rindu: "); //pienem max 40 simbolus
        scanf("%[^\n]", input);
        printf("\n");

/*      for(j=0;j<lenght;j++)
        {
                if((int)input[j] < 33)
                {
                        printf("Lugums ievadit tikai burtus");
                        break;
                }
        } */ //izvada pazinojumu un terminate all program

        lenght = strlen(input); //pieskir rindas garumu

        for (j=0;j<lenght;j++) //sakarto augosa seciba masivu
        {
                for (i=0;i<lenght-1;i++)
                {
                        if (input[i]>input[i+1])
                        {
                                a = input[i+1];
                                input[i+1] = input[i];
                                input[i]= a;
                        }
                }
        }

        min, max =(int)input[0]; //uzskata 1 elementu ka max un min

        for(i=0;i<lenght;i++)
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

 //modas

	/*j=0;
	for(i=0;i<lenght;i++)
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

	for(i=0;i<lenght;i++)
	{
		if(input[i]==input[i+1])
 	      	{
                	j++;
	        }

	        else if(input[i] != input[i+1])
       		{
			if (max==j)
			{
				printf("moda pec ASCII: %d \n", input[i]);
			}
	        }
	j=0;
	} */

 //MODAS ALGORITMS NERABOTAJET SHAS

        printf("Mazaka ievadita vertiba pec ASCII: %c = %d \n",min,min);

        printf("Lielaka ievadita vertiba pec ASCII: %c = %d \n",max,max);

        printf("Videja vertiba pec ASCII: %d \n",sum/lenght);

        printf("Mediana pec ASCII: %d \n", input[lenght/2]);

        printf("Print alfabetiska seciba: ");

        for(i=0;i<lenght ;i++)
        {
                printf("%c ",input[i]);
        }
        printf("\n\n");

        printf("Ievaditais simbols \t ASCII vertiba\n"); //divas kolonnas alfabetiska seciba, katram char atbilstosa ASCII preti
        printf("Char \t\t\t Dec \n");

        for(i=0;i<lenght;i++)
        {
                printf("%c \t\t\t %d \n",input[i], input[i] );
        }

 return 0;
}

