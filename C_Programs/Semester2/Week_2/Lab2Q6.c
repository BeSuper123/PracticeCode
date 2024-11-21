/*
Programs Description: This program demonstrates using pass by reference to increment the given variable in main

Author: Blessing Ugochukwu

Date: 08/02/24
*/
#include <stdio.h>

// function assignment
void passByReference(int *);

int main() {
    int num1 = 1;


    // prints the original value of num1
    printf("Original Value: %d", num1);

    // finds the value of num1 to what is returned in the passByValue method
    passByReference(&num1);

    // prints the new value of num1
    printf("\nMain Value num1: %d", num1);

    return 0;
} // end main

// uses pass by reference to increment the given variable by 2
void passByReference(int *n1) {
    // increments n1 by 2
    (*n1)+=2;

    // prints the new value of num1
    printf("\nPass By Reference num1: %d", *n1);
 
} // end passByReference