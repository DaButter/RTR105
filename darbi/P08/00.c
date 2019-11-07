//191REB071

#include<stdio.h>
#include<stdlib.h>

int main () {
	int i, N;
	int Z=1;
	int X=0; //cipari no stud apliecibas nummura

	N= (Z+1)*3;
	int a[N];

	//gadījuma ģeneracija
	srand(X);

	for ( i = 0; i<N ; i++) {
		a[i]=rand() % 10;
	}

	//masiva drukasana
	for (i=0; i<N; i++) {
	printf("%d\n", a[i]);
	}
	return(0);
 } 
