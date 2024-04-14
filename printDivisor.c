#include <stdio.h>

void divisors(int n){
     int i;
     for (i = 1l ;i<=n/2; i++)
         if(n%i == 0) printf("%d", i);
}

int main(){
    int n, i;
    printf("\nInput n ="); scanf("%d",&n);
    getchar();
    divisors(n);
    printf("\nInput n ="); scanf("%d",&n);
    divisors(n);
    printf("\nInput n ="); scanf("%d",&n);
    divisors(n);
    
    getchar();
    
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    
    getchar();
    getchar();
    getchar();
    getchar();
}
