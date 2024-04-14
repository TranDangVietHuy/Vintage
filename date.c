#include <stdio.h>
#include <stdlib.h>

int validDate ( int d, int m, int y) {
        int maxd = 31; /*max day of months 1, 3, 5, 7, 8, 10, 12 */
/* basic checking */
if ( d<1 || d>31 || m<1 || m>12) return 0;
/* update maxd of a month */
if ( m == 4 || m==6 || m==9 || m==11) maxd=30;
else if (m==2) {
            /* leap year? */
             if ( y%400==0 || ( y%4==0 && y%100!=0)) maxd=29;
             else maxd=28;
       }
return d<=maxd; 
}  

int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:


    int d, m, y;
    scanf("%d%d%d", &d, &m, &y);


    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");


    //@STUDENT: WRITE YOUR OUTPUT HERE

    if (validDate(d,m,y)) printf("1");
    else printf("0");

    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}