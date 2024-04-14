#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, i;
	int* arr1 = NULL;
	int* arr2 = NULL;
	
	printf("Enter number of elements stored in array: "); scanf("%d ", &n);
	

	arr1 = (int*) malloc (n * sizeof(int));
	arr2 = (int*) malloc (n * sizeof(int));
	
	printf("Input %d elements in the array: ", n);

	for (i = 0; i < n; i++){
		scanf("%d", &arr1[i]);
	}
	
	for (i = 0; i < n; i++){
		arr2[i] = arr1[i];
	}
	
	for (i = 0; i < n; i++){
		printf(" %d", arr2[i]);
	}
	
	free(arr1);
	free(arr2);
}
