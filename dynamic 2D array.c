#include <stdio.h>
#include <stdlib.h>


int main(){
	int r = 4, c = 4, i, j;
	long int** a; 
	
	a = (long int**) malloc(r*sizeof(long int*));
	a[0] = (long int) malloc (c*sizeof(long int));
	a[1] = (long int) malloc (c*sizeof(long int));
	a[2] = (long int) malloc (c*sizeof(long int));
	
	
	printf("Memory of M2:\n");
	printf("address of 'a': %d\t value of 'a': %d\n",&a,a);
	for (i = 0; i < r; i++){
		for(j = 0; j < c; j++){
			printf("%ld ", a[i][j]);
		}
		printf("\n");
	}
	
	free(a);
	
	getch();
}
