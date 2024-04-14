#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int menu() {
    int result;
    printf("1 - checkHundredNumber\n");
    printf("2 - printFine\n");
    printf("3 - sumSeries\n");
    printf("4 - printTriangle\n");
    printf("5 - Number Swap\n");
    scanf("%d", &result);
    return result;
}
int checkHundredNumber(int N);
void printFine(float speed);
int sumSeries(int n);
void printTriangle(int n);
void swap(int* aPtr, int* bPtr){
    int temp;
    temp = *aPtr;
    *aPtr = *bPtr;
    *bPtr = temp;
}

int main() {
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
    int userChoice;
    int N;
    int a,b;
    //scanf("%d", &N);

    float speed;
    //scanf("%f", &speed);

    int sum;

    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE

    userChoice = menu();

    switch (userChoice)
    {
    case 1:
        printf("Input a number: ");
        scanf("%d", &N);
        if (checkHundredNumber(N)==1) {
            printf("%d is HUNDRED NUMBER.", N);
        } else {
            printf("%d is not HUNDRED NUMBER.", N);
        }
        break;
    
    case 2:
        printf("Input speed: ");
        scanf("%f", &speed);
        printFine(speed);
        break;
    
    case 3:
        printf("Input a number: ");
        scanf("%d", &N);
        sum = sumSeries(N);
        printf("S = %d", sum);
        break;
    
    case 4:
        printf("Input a number: ");
        scanf("%d", &N);
        printTriangle(N);
        break;
    case 5:
        printf("Input first number: "); scanf("%d", &a);
        printf("Input second number"); scanf("%d", &b);

        swap(&a,&b);
        printf("Swapped numbers:\n ");
        printf("first number: %d\n",a);
        printf("Second number: %d",b);
        break;
    default:
        printf("Khong co chuc nang %d", userChoice);
        break;
    }
       

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    
    system("pause");
    return(0);
}

int checkHundredNumber(int N) {
    int result = 0;
    if (N%100 == 0) {
        result = 1;
    }
    return result;
}

void printFine(float n) {
    if (n >= 0 && n <= 50){
    	printf ("0");
	} else if (n <= 60) {
		printf ("1000000");
	} else if (n <= 70){
		printf ("4000000");
	} else if (n <= 85){
		printf ("8000000");
	} else printf ("12000000");
}

int sumSeries(int n) {
    int result = 0;
    int i;

    for ( i=1; i<=n; i++) {
        result = result + 6 * i;
    }
    return result;
}

void printTriangle(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            if (j == 1) {
                printf("*");
            } else {
                printf("_*");
            }
        }
        printf("\n");
}


  

}
