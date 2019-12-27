//191REB071

#include<stdio.h>
#include<stdlib.h>

int main () {
	int i, N;
	N= (+1)*3
	int a[N];

	//gadījuma ģeneracija
	srand(0);

	for ( i = 0; i<N ; i++) {
		a[i]=rand() % 10;
	}

	//masiva drukasana
	for (i=0; i<N; i++) {
	printf("%d\n", a[i]);
	}
	return(0);
 } 
