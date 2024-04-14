#include <stdio.h>
#include <stdlib.h>
void primecheck(int *a){
	int j;
	if(a[j] == 2)printf("%d ", a[j]);
	for (j = 2 ; j*j <= a[j]; j++){
			if (!(a[j] % j == 0)) printf("%d ", a[j]);
}

int main(){
	int *array;
	int n,i,j,k;
	
	printf("Enter range: ")	; scanf("%d",&n);
	array = (int*) malloc (n*sizeof(int));
	
	for (i = 0; i<n ; i++){
		printf("Enter value for a[%d]",i); scanf("%d",&array[i]);
		
	}
	
primecheck(a);

	
}
