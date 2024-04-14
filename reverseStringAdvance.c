#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* replaceAll (char* source, char* subStr, char*repStr){
    int subL = strlen(subStr);
    int repL = strlen(repStr);

    char temp[100];
    char *ptr = strstr(source, subStr);

    printf("%s\n", ptr);

    int i;

    while (ptr != NULL){
        strcpy(ptr, ptr+subL);
        printf("%s\n", ptr);
        if (repL > 0){

            strcpy(temp, ptr);
          printf("%s\n", temp);

            strcpy(ptr+repL, temp);
            printf("%s\n", ptr);

            for (i = 0; i < repL; i++) *(ptr+i) = repStr[i];
            printf("%s\n", ptr + repL);

        }
        ptr = strstr(ptr + repL, subStr);
        printf("%s\n", ptr);
    }
    return source;
}



int main(){
    system("cls");

    char o[50], p[5], pi[5];

    int i, len;
    gets(o);
    gets(p);

    len = strlen(p);

   
    for (i = 0; i < len; i++) 
        pi[i] = p[len-i-1];
    pi[len] = '\0';

    printf("\nOUTPUT:\n");

    printf("pi: %s\n",pi);

    replaceAll (o, p, pi);

    printf("o: %s", o);

    printf("\n\n");
    system("pause");
    return 0;
}
