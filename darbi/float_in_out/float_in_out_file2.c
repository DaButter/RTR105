#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

//	FILE *f = fopen("testing.txt", "w");
//	for (i=0, i<18, i++) {
//		fprintf(f, "%d\n", position[i]);
//		}
int i;
int v[10]; // = {34,0,23,34,1,24,2,3,4,5};

	for(i=0;i<10;i++){
		printf("Ievadiet 10 skaitlus: ");
		scanf(" %d", &v[i]);
	}

int j=0, adder=0, done=0;

while(1){
	if (done==11)
		break;
		done++;
	if (j<=10){
		printf(" %d", v[i]);
		i=i+5;
	}
	if (j>10){
		printf("\n");
		adder++;
		i = adder;
	}
       }
}
