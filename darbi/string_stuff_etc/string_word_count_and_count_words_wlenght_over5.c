#include <stdio.h>
#include <string.h>
#define MAX_WORDS 10

int main ()
{
	int i, totalwords=1, len=0, j=0, k=0, cnt[MAX_WORDS];
	char text[100];

	char strfive=0;

	printf("\n Ievadiet vardus: ");
	scanf("%[^\n]s",&text);

         while(1) 
        {
                if(text[k]==' ' || text[k]=='\0')
                {
                        if(text[k]=='\0')
                        {
                                if(len>0)
                                {
                                        cnt[j++]=len;

					if(len>5)
					{
						strfive++;
					}
                                        len=0;
                                }
                                break;
                        }
                        cnt[j++]=len;

			if(len>5)
			{
				strfive++;
			}
                        len=0;
                }
                else
                {
                        len++;
                }
                k++;
        } //funkcija, kas saskaita simbolu skaitu katra vardaa

	for(i=0; text[i]!='\0'; i++)
	{
		if(text[i]==' ' || text[i]=='\n' || text[i]=='\t')
		{
			totalwords++;
		}
	}  //funkcija, kas saskaita varadus ievaditajaa teksta

	printf("\n Ievadito vardu skaits saja teikuma (%s) ir: %d \n",text,totalwords); //izvada ievadito vardu skaitu

        printf(" Katra ievadita varda garums: "); //izvada katra varda simbolu skaitu
        for(k=0;k<j;k++)
	{
                printf("%d, ",cnt[k]);
        }
        printf("\b\b \n"); //nonem pedejo komatu skaitlim
	printf(" Vardu skaits, kuru garums parsniedz 5 simbolus, ir: %d \n",strfive);
	return 0;
}
