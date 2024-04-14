#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, i,j;
	int* a;
	
	printf("Enter n:"); scanf("%d", &n);
	
	a = (int*) malloc (n * sizeof(int));
	
	
	for (i = 0; i < n;i++) scanf("%d",&a[i]);
	
	int count = 0;
	for (i = 0; i < n; i++){
		if(a[i] == a[i-1]) continue;
		else{
		
			for (j = i+1; j < n; j++){
				if(a[i] == a[j]){
					count++;
					break;
				}
			}
		}
	}
		printf("\n\nOUTPUT\n");
		printf("%d", count);
}
