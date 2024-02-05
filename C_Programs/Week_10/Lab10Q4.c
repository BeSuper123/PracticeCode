/*
Programs Description: This program demonstrates how pointers work

Author: Blessing Ugochukwu

Date: 22/11/23
*/
#include <stdio.h>

int main() {
    // code
    int var1;
    int *ptr;
    var1 = 1;
    ptr = &var1;
  


    printf("the address of var1 is %p", &var1); 
    printf("\nptr contains %p", &ptr); 
    printf("\n*ptr contains %d", *ptr); 

    return 0;
}
