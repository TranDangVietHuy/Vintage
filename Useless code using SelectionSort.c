#include <stdio.h>

void input(float* a, int n){
	int i;
	for (i =0; i < n; i++){
		printf("Enter value a[%d]: ", i);
		scanf("%f",&a[i]);
	}
}

void SelectionSort (float *a, int n){
	int i, j;
	for(i = 0; i < n-1; i++){
		int minVal = i;
		for(j = i + 1; j < n; j++) if(a[minVal] > a[j]) minVal = j;
		
		if(minVal > i){
			a[minVal] = a[minVal] + a[i];
			a[i] = a[minVal] - a[i];
			a[minVal] = a[minVal] - a[i];
		}
	}
}

void print(float *a , int n){
	int i;
	for (i = 0; i < n; i++) printf("%f  ",a[i] );
}
int main(){
	float a[5];
	int n = sizeof(a)/sizeof(float);
	input(a,n);
	SelectionSort(a,n);
	print(a,n);
}
