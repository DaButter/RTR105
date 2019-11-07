 #include <stdio.h>

int main() {

        FILE *fptr;

        char string[60];
        fptr = fopen("austra_teksts.txt", "w"); //define, kur txt saglabas failu

        printf("Ievadiet saglabājamo tekstu\n"); //lietotajs ievada saglabajamo tekstu
        scanf("%[^\n]", &string);
        fprintf(fptr, "%s\n", string);
        fclose(fptr);

    }

