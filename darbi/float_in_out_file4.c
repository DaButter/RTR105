#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

 double mas1[5][2];
 double mas2[5][3];
 FILE *fptr;

 fptr = fopen("float_teksta_fails.txt","w");
 if(fptr == NULL) {
	printf("Error!");
	exit(1);
	} 

 for(int i=0; i<5; i++) {
	for(int j=0; j<2; j++) {
		printf("Ievadiet %d. rindas un %d. kolonnas mainigo: ",i+1,j+1);
		scanf("%lf",&mas1[i][j]);
		}
	}
 for(int i=0; i<5; i++) {
	for(int j=0; j<2; j++) {
		fprintf(fptr,"%f ",mas1[i][j]);
		}
	 fprintf(fptr,"\n");
	}

 fclose(fptr);

 if ((fptr = fopen("float_teskta_fails.txt","r")) == NULL) {
	printf("Error when opening file!");
	exit(1);
	}

 for(int i=0; i<5; i++) {
	for(int j=0; j<2; j++) {
		fscanf(fptr, "%lf ",&mas2[i][j]);
		}
	    printf("%.3f %.3f %.3f\n",mas2[i][0],mas2[i][1],mas2[i][0]*mas2[i][1]); //noapaloju 3 ciparu aiz komata, ertak uztvert
	}
 fclose(fptr);
 return 0;
}
