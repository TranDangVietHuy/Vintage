#include <stdio.h>
#include "alpha.c"

int isPrime(int n){
	int j;
	if( n < 2) return 0;
	for (j = 2; j*j <= n; j++){
		if (n % j == 0) return 0;

	}
	return 1;
}