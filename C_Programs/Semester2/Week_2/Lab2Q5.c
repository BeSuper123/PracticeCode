/*
Programs Description: This program demonstrates using pass by value to increment the given variable in main

Author: Blessing Ugochukwu

Date: 08/02/24
*/
#include <stdio.h>

// function assignment
void passByValue(int);


int main() {
    int num1 = 1;


    // prints the original value of num1
    printf("Original Value: %d", num1);

    // finds the value of num1 to what is returned in the passByValue method
    passByValue(num1);

    // prints the new value of num1
    printf("\nMain Value num1: %d", num1);

    return 0;
} // end main

// uses pass by value to increment the given variable by 2
void passByValue(int n1) {
    // increments n1 by 2
    n1 = n1 + 2;

    // prints the new value of num1
    printf("\nPass By Value num1: %d", n1);
} // end passByValue