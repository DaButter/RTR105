#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *mode(char input[], int lenght) {
    int maxcount = 0;
    int *mods = malloc(300);
    int offset = 1;

    //memset lai iztiritu masivu

    for (int i = 0; i < lenght; i++) {
        int cnt = 0;
        int found = 0;

        for (int k = 0; k < sizeof(mods); k++) {
            if (mods[k] == input[i]) {
                found = 1;
                break;
            }
        }

        if (found) {
            continue;
        }

        for (int j = 0; j < lenght; j++) {
            if ((int) input[j] == (int) input[i]) {
                cnt++;
            }
        }

        if (cnt > maxcount) {
            maxcount = cnt;
            memset(mods, -1, 300);
            mods[0] = (int) input[i];
            offset = 1;
        } else if (cnt == maxcount) {
            mods[offset] = (int) input[i];
            offset++;
        }
    }

    return mods;
} //modas aprekinasanas funkcija

int main() {
    char input[300];
    int sum = 0, i, j, a, lenght;

    long int max, min;

    printf("\nLudzu ievadiet burtu rindu (max 300 burtus) : ");
    scanf("%[^\n]", input);

    lenght = strlen(input); //pieskir rindas garumu

    printf("\nIevadito simbolu skaits: %d\n",lenght);

    for (j = 0; j < lenght; j++) //sakarto augosa seciba masivu
    {
        for (i = 0; i < lenght - 1; i++) {
            if (input[i] > input[i + 1]) {
                a = input[i + 1];
                input[i + 1] = input[i];
                input[i] = a;
            }
        }
    }

    min, max = (int) input[0]; //uzskata 1 elementu ka max un min

    for (i = 0; i < lenght; i++) {
        if ((int) input[i] > max) //salidzina 1 elementu ar parejiem, ta noskaidro max un min elementu
        {
            max = (int) input[i];
        }

        if ((int) input[i] < min) {
            min = (int) input[i];
        }

        sum = sum + (int) input[i]; //sasumme visus elementus kopa ka int
    }

    //printf block

    printf("\nMazaka ievadita vertiba pec ASCII: %c = %d \n", min, min);

    printf("\nLielaka ievadita vertiba pec ASCII: %c = %d \n", max, max);

    printf("\nVideja vertiba pec ASCII: %c = %d \n", sum / lenght, sum / lenght);

    if (lenght % 2 == 1) {
        printf("\nMediana pec ASCII: %c = %d \n", input[lenght / 2], input[lenght / 2]);
    } else if (lenght % 2 == 0) {
        int med = (input[lenght / 2] + input[(lenght / 2) - 1]) / 2; //medianas aprekinasanas funkcija

        printf("\nMediana pec ASCII: %c = %d \n", med, med);
    }

    printf("\nModa(s) pec ASCII: \n");

    int *modas = mode(input, lenght);

    for (int k = 0; k < sizeof(modas); ++k) {
        if (modas[k] == -1) break;
        printf("%c = %d \n", modas[k], modas[k]); //printf modas no modas funkcijas sakumaa
    }

    printf("\nPrint alfabetiska seciba: ");

    for (i = 0; i < lenght; i++) {
        printf("%c ", input[i]);
    }

    printf("\n\nIevaditais simbols \t ASCII vertiba\n"); //divas kolonnas alfabetiska seciba, katram char atbilstosa ASCII preti
    printf("Char \t\t\t Dec \n");

    for (i = 0; i < lenght; i++) {
        printf("%c \t\t\t %d \n", input[i], input[i]);
    }

    free(modas); //atbrivo no RAM rezerveto vietu koda sakumaa
    return 0;
}
