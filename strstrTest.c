#include <stdio.h>
#include <string.h>

int main(){
    char str1[20], str2[20];
    printf("Enter str1: "); gets(str1);
    printf("Enter str2: "); gets(str2);

    char* s_ptr = strstr(str1,str2);

    if(s_ptr)printf("s_ptr value: %s, u value: %u", s_ptr,*s_ptr);
    else printf("String not found!");
}