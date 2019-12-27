#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define AUGSTUMS 2
#define PLATUMS 3

int main () {

	FILE *f;
	float m[5],a[5];
	int i,j,k,l;

	for(k=0;k<5;k++) {
		printf("Ievadiet 1.kolonnas skaitlus: ");
		scanf("%lf",&m[k]);
		}
	for(l=0;l<5;l++) {
		printf("Ievadiet 2.kolonnas skaitlus: ");
		scanf("%lf",&a[l]);
		}

	f = fopen("TESTS_FLOAT.txt", "r");

	for(i=0; i<AUGSTUMS; i++) {
		for(j=0;j<PLATUMS;j++) {
			fscanf(f, "%lf", &m);
			printf("%lf",m);
		}
		printf("\n");
	      }
	fclose(f);
 }
