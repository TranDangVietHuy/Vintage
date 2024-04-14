#include <stdio.h>


struct motorbike{
    char code[10];           // Ma xe
    int cccd[12];             // So CCCD
    char sureName [20];      // Ho chu xe
    char firstName[10];      // Ten chu xe
    char type[10];              // Loai xe
    char numberPlate[10];        // Bien so xe
    double price;              // Gia tien
};
    
typedef struct motorbike motor;

//   *****************************************
//  *           Declare Function            *
// *****************************************

/* Khai bao ham vao day de tien quan ly 
   xem nhom da lam duoc bao nhieu ham */

void menu(int choice);
