#include <stdio.h>
#include <stdlib.h>

void arrayInput (int a[], int n){
   int i;
   for (i = 0; i < n; i++){
      printf("Enter value for a[%d]: ", n);
      scanf("%d", &n);
   }
}

void arrayOutput(int a[], int n){
   int i;
   for (i = 0; i < n; i++) {
      printf("%d ",a[i]);
   }
}

int main()
{
   int n;

   printf("Enter number of elements: "); scanf("%d", &n);

   int *pt = (int*) malloc(n* sizeof(int));
   printf("\n\n\t\t INPUT ELEMENTS");
   arrayInput(pt,n);
   
   printf("\n\n\t\t ARRAY OUTPUT");
   arrayOutput(pt,n);

 

   
      free(pt);
}