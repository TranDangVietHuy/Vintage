#include <stdio.h>

double equivalent(double r1, double r2, double r3){
    double Z; 
    Z =1/r1 + 1/r2 + 1/r3;
    return 1/Z;
}

int main(){
    double r1, r2, r3, Z;
    printf("\n Input 3 resistances: "); scanf("%lf%lf%lf",&r1,&r2,&r3);

    Z = equivalent(r1,r2,r3);
    printf("The equivalent: %lf",equivalent(r1,r2,r3));
    
    getchar();
    getchar();


}
