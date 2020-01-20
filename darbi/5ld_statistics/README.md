<!-- https://help.github.com/en/github/writing-on-github/basic-writing-and-formatting-syntax -->
# Laboratorijas darbs Nr.5 atskaite - Statistics

## Teorija

Statistika ir matemātikas apakšnozare, kas nodarbojas ar datu kārtošanu, pētnecību. Šī programma sakārto ievadītos datus, atrod tajos statistikas pamatlielumus - modu, mediānu, max un min vērtību, kā arī sakārto alfabētiski.
Statistika noder arī, lai datus sakārtotu lietotājam pārskatāmi, ērti.

### Kods
```
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
} //modas aprekinasanas funkc

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

```  

### Rezultāts
```

Ludzu ievadiet burtu rindu (max 300 burtus) : asdfaauuu

Ievadito simbolu skaits: 9

Mazaka ievadita vertiba pec ASCII: a = 97 

Lielaka ievadita vertiba pec ASCII: u = 117 

Videja vertiba pec ASCII: j = 106 

Mediana pec ASCII: f = 102 

Moda(s) pec ASCII: 
a = 97 
u = 117 

Print alfabetiska seciba: a a a d f s u u u 

Ievaditais simbols 	 ASCII vertiba
Char 		              Dec 
a 			      97 
a 			      97 
a 			      97 
d 			      100 
f 			      102 
s 			      115 
u 			      117 
u 			      117 
u 			      117 

```

### Analīze

Kompilējot kod ar gcc -lm un palaižot, programma pajautā lietotājam ievadīt burtu rindu ar maksimums 300 simboliem (jo uzliku maksimālo masīva ietilpību 300, to, protams, var mainīt pēc saviem ieskatiem kodā). Ievadot simbolu rindu un nospiežot enter, tiek izvadīts sekojošais:

1. Ievadīto simbolu skaits.
2. Mazākā ievadītā simbola vērtība pēc ASCII. (izvada simbolu un atbilstošo ASCII vērtību)
3. Lielākā simbola ievadītā vērtība pēc ASCII. (izvada simbolu un atbilstošo ASCII vērtību)
4. Aritmētiskā vidējā no visiem ievadītajiem simboliem. (izvada simbolu un atbilstošo ASCII vērtību)
5. Mediāna no visiem ievadītajiem simboliem. (izvada simbolu un atbilstošo ASCII vērtību)
6. Moda vai vairākas modas no visiem ievadītajiem simboliem. (izvada simbolu un atbilstošo ASCII vērtību)
7. Sakārtoti ievadītie burti alfabētiskā secībā.
8. Burti sakārtoti alfabētiski tabulā un katram pretī ir atbilstošā ASCII vērtība.

Testējot programmu, secinu, ka programma strādā korekti, izvada pareizas vērtības.

Trūkumi - manuprāt, kodu iespējams uzrakstīt efektīvāk, izmantojot daudz vienkāršāku modas aprēķina pricpipu. Masīvs rezervē vietu datora operatīvajā atmiņā. Koda beigās šī atmiņas rezervācija tiek atcelta, lai nepiesārņotu datora operatīvo atmiņu. Kaut gan ietilpīgāks, bet šis modas aprēķināšanas princips, kas atrodams manā kodā, vienmēr garantēti atradīs visas ievadītās modas.


