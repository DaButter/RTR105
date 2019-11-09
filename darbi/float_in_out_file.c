#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

        FILE *fptr;
	int s1[5];
	int s2[5];
	int i,j;

	fptr = fopen("TESTA_FLOAT.txt", "w");

	for (i=0; i<5; i++){
	printf("Ievadiet 5 realus skaitlus 1. kollonai: \n");
	scanf("%d", &s1[i]);
	fprintf(fptr, "%d\n", s1[i]);
	}

	for(j=0;j<5;j++){
	printf("Ievadiet 5 realus skaitlus 2. kollonai: \n");
	scanf("%d", &s2[j]);
	fprintf(fptr, "%d\n", s2[j]);
	}
	
	fclose(fptr);
}
/*	for (j=0; j<2; j++) {
			printf("Ievadiet skaitli [%d][%d] kolonna: ",i,j);
			scanf("%d", &s1[i][j]);
			}
		} */

/*	fptr = fopen("float_in_out_file.txt", "w+");
	for (i=0;i<5;i++) {
			fprintf(f, "%d", s1[i]);
			fprintf(f, "%d", s2[i]);
		}
	fclose (fptr); */

//	f = fopen("float_in_out_file.txt", "r+");
//	for (i=0;i<5;i++) {
//		for(j=0;j<2;j++) {
//			fscanf(f, "%d", &s2[i][j]);
//		}
//		s2[i][3] = s2[i][1] * s2 [i][2];
//	}

//	printf("Rezultats: ");
//	for(i=0;i<5;i++) {
//		for(j=0;j<3;j++){
//			printf("%d",[i][j]);
//			if(j==3){
//				printf("\n");
//			}
//		}
//	}
//	fclose (f);
// }
