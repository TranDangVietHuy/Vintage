#include <stdio.h>
int print(int *a, int size){
	int i, sum = 0;
	for (i = 0; i< size; i++){
		sum += (a[i]*a[i]);
	}
	return sum;
}
int main(){
	int a [] = {1,5,6,2,4,1,3};
	int size = sizeof(a)/sizeof(int);
	printf("sum: %d", print(a,size));
}
