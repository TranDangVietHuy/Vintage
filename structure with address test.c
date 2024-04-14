#include <stdio.h>
#include <stdlib.h>

struct date { 
    int day;
    int month;
    int year;
};

void inputDate(struct date d ){
    printf("Enter day: "); stdin("%d", &d.day);


}

