#include <stdio.h>
#include <string.h>

int mode(char input[], int lenght)
{
	int maxvalue=0, maxcount=0,i,j;

        for(i=0;i<lenght;i++)
        {
               int cnt = 0;

                for(j=0;j<lenght;j++)
                {
                        if((int)input[j]==(int)input[i])
                        {
                                cnt++;
                        }
                }

                if(cnt > maxcount)
                {
                        maxcount = cnt;
                        maxvalue = (int)input[i];
                }
        }

 return maxvalue;
} //modas aprekinasanas funkcija

int main()
{
        char input[300];
        int sum=0,i,j,a,lenght;

        long int max,min; //izmantojot vienkarsi int, min vertiba lagoja
        // radija -1483845 utml.


        printf("\nLudzu ievadiet burtu rindu: "); //pienem max 400 simbolus
        scanf("%[^\n]", input);
        printf("\n");

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

	//printf block

        printf("Mazaka ievadita vertiba pec ASCII: %c = %d \n",min,min);

        printf("Lielaka ievadita vertiba pec ASCII: %c = %d \n",max,max);

        printf("Videja vertiba pec ASCII: %c = %d \n",sum/lenght,sum/lenght);

	//mediana /2, noprecizet, ja ir para skaitlis elementu

	if(lenght%2 == 1)
	{
	        printf("Mediana pec ASCII: %c = %d \n",input[lenght/2],input[lenght/2]);
	}

	else if(lenght%2 == 0)
	{
		int med = (input[lenght/2]+input[(lenght/2)-1])/2; //seit kkas sapisies

		printf("Mediana pec ASCII: %c = %d \n",med,med);
	}


	printf("Moda pec ASCII: %c = %d \n",mode(input,lenght),mode(input,lenght));

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

