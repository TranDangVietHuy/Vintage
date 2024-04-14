#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s1[100];
    gets(s1);
    
    int len = strlen(s1), i;
    int CountAlpha = 0;
    int CountDigit = 0;

    for (i = 0; i < len; i++){
        if (isalpha(s1[i])) CountAlpha+=1;
        else if(isdigit(s1[i])) CountDigit += 1;
    }

    printf("Alphabet: %d \nDigit:  %d",CountAlpha,CountDigit);


}

