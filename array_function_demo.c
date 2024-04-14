#include <stdio.h>
#include <stdlib.h> 
#define MAXN 100

void input(int* a, int n){
	int i; 
	for (i = 0; i<n; i++) scanf("%d", &a[i]);
}

int max(int a[], int n){
	int result = a[0];
	
	int i;
	for (i = 1; i < n; i++)
		if (result < a[i]) result = a[i];
	return result;
}

void print (int* a, int n){
	int i;
	for (i = 0; i < n; i++) printf("%d ", a[i]);
}

void printEven (int *a, int n){
	int i;
	for (i = 0; i <n; i++){
		if (a[i]%2 == 0) printf("%d ", a[i]);
	}
}


int main() {
	int *a; 
	int n;
	int maxVal;
	do{
		printf("Enter number of elements: "); scanf("%d", &n);
		
	}while (n < 1);
	
	a = (int*) malloc(n  * sizeof(int)); 
	printf("Enter values of array\n");
	input(a,n);
	
	maxVal = max(a,n);
	
	printf("Max value: %d\n", maxVal);
	printf("\nRegistered Value: "); print(a,n);
	
	printf("\nEven values in array: "); printEven(a,n);
	while (getchar() != '\n') ;getchar();
	
	return 0;
}
