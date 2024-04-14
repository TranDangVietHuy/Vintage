#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

char *replaceAll(char* source, char* subStr, char* repStr){
	int subL = strlen (subStr);
	int repL = strlen (repStr);
	
	char temp [100];
	
	char*ptr = strstr(source, subStr);
	
	int i;
	
	while (ptr != NULL) {
		strcpy (ptr, ptr+subL);
		if (repL > 0){
			strcpy(temp, ptr);
			strcpy(ptr + repL, temp);
			
			for ( i = 0; i < repL; i++) * (ptr+i) = repStr[i];
		}
		ptr= strstr(source, subStr);
	}
	
	return source;
}


int main (){
	char s[80] = "aaabccbcde";;
	char subStr[21] = "bc";
	char repStr[21] = "cb";
	
	puts(s);
	replaceAll(s, subStr, repStr);
	puts(s);
	
	getchar();
	
	getchar();
	
	return 0;
	/*int i;
	int len = strlen(s1);
	gets(s1);
	for (i = 0; i < len; i++){
		char temp = s1[i];
		s1[i] = s1[len - 1 - i];
		s1[len - 1 - i] = temp;
	
		s1[len] = '\0';
	}
	
	
	puts(s1);
	*/
}


