#include <stdio.h> 
#include <stdlib.h>
#include <string.h> 

int main() {
	char* s1;
	char* s2;
	int n  = 31;
	
	s1 = (char*) malloc (n+1);
	s2 = (char*) malloc (n+1);
	
	printf("Enter String: ") ; gets (s1);
	
	printf("\nString s1 is: %s",s1);
	
	//STRING LENGHT 
	
	printf("\nLength of s1: %d", strlen(s1));
	
	 // COPY S1 to S2 
	 
	strcpy(s2,s1) ;
	printf("\nString s2: %s", s2) ;
	printf("\nCompare 2 string: %d ", strcmp(s2,s1));
	
	strupr(s2);
	printf("\nUppercase String S2: %s", s2);
	
	
	printf("\nCompare 2 string: %d ", strcmp(s2,s1));
	
	strcat(s1,s2);
	printf("\nConcatenate s1, s2: %s",s1);

	
	printf("\n================================\n");
	system("pause");
}
