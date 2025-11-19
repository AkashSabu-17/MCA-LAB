//Program to demonstrate the use of storage classes @ Akash Sabu 28/07/2025
#include <stdio.h>
int globe = 12; // global variable 

void storageClass() 
{
    int loc = 42;               // local variable
    static int stat = 11;       // static variable
    register int reg = 15;      // register variable 

    printf("\nSTORAGE CLASSES\n");
    printf("global    : %d\n", globe);
    printf("local     : %d\n", loc);
    printf("static    : %d\n", stat);
    printf("register  : %d\n", reg);
}

int main() {
    storageClass();
    return 0;
}
