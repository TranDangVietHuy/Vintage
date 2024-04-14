#include <stdio.h>

int getRelPos ( double x, double y, double r) {
   double d2=x*x + y*y;  /* d2= x2+ y2  */
   double r2= r*r;            /* r2*/  
   if (d2<r2) return 1 ; /* d2<r2 the point is in the circle */
   else if (d2==r2) return 0 ; /* d2=r2 the point is on the circle */
   return -1 ; /* d2 > r2 the point is out of the circle */
}

double factorial ( int n) {
    double p=1;
    int i;
    for (i=2; i<=n; i++) p *= i;
    return p;


}

double fibonacci ( int n) {
    int t1=1, t2=1, f=1, i ;
   for ( i= 3;   i<=n; i++) {
      f= t1 + t2;
      t1= t2;
      t2=f;
   }
   return f;
} 


int main() {
    system("cls");
    // INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:


    double x, y, r;
    scanf("%lf%lf", &x, &y);
    
    do{
        scanf("%lf", &r);
    }while(r<0);
    int result = getRelPos(x,y,r);


    // Fixed Do not edit anything here.
    printf("\nOUTPUT:\n");
    //@STUDENT: WRITE YOUR OUTPUT HERE


    if(result == 1) printf("The point is in the circle");
    else if(result == 0) printf("The point is on the circle");
    else printf("The point is out of the circle");
    
    //--FIXED PART - DO NOT EDIT ANY THINGS HERE
    printf("\n");
    system("pause");
    return(0);
}