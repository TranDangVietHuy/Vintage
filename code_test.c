#include <stdio.h>
#include <stdlib.h>

void arrayInput(int *a, int n);
void arrayOutput(int *a, int n);
int maximumValue(int a[], int n);
void printEven(int *a, int n);

int main() {
    int* a = (int*) malloc (sizeof(int));
    int n = 1;
    int i = 0;
    do{
        a = (int*) realloc(a, (n+1)*sizeof(int));
        printf("Input for element a[%d]: ", i); scanf("%d", &a[i]);

        if(a[i] == 0) break;
        i++;
        n++;
    }while(i < n);

    int maxValue = maximumValue(a,n);
    printf("\nMaximum value: %d", maxValue);

    printf("\n\nArray elements: ");
    arrayOutput(a,n); 

    printf("\n\nEven value: "); printEven(a,n);

    free(a);
    getchar();

}

void arrayInput(int *a, int n){
    int i;
    for (i = 0; i < n; i++){
        printf("Input for element a[%d]: ", i); scanf("%d", &a[i]);
        if (a[i] == 0) break;
    }
}

void arrayOutput(int *a, int n){
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int maximumValue(int a[], int n){
    int maxValue = a[0];
    int i;

    for (i = 0; i < n; i ++) {
        if (a[i] > maxValue) maxValue = a[i];

    }

    return maxValue;
}

void printEven(int *a, int n){
    int i;
    for (i = 0; i < n; i++){
        if(a[i]%2 == 0) printf("%d ", a[i]);    
    }
}

