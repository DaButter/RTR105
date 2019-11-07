#include<stdio.h>
#include<string.h>

int main () {

	char te[50], t_co[50];

	printf("Lietotāj, ievadiet tekstu: ");

	fgets(te, sizeof(te), stdin);

	strcpy(t_co, te);

	printf("1. %s\n",t_co);
	printf("2. %s\n",t_co);
	printf("3. %s\n",t_co);
	printf("4. %s\n",t_co);
	printf("5. %s\n",t_co);
}
