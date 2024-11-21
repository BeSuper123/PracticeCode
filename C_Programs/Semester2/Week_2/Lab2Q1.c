/*
Programs Description: This program demonstrates using pass by value to check if a given integer is even or odd

Author: Blessing Ugochukwu

Date: 08/02/24
*/
#include <stdio.h>

// function assignments
int evenOrOdd();

int main() {
    int num1;


    // asks the user to enter an integer
    printf("Enter a positive integer: ");
    scanf("%d", &num1);

    // finds out if the number is even or odd
    num1 = evenOrOdd(num1);

    // prints the value of num1
    printf("%d", num1);

    return 0;
} // end main

// finds out if the given variable is even or odd
int evenOrOdd(int n1) {
    // changes the value of n1 to 0 for odd and 1 for even
    if (n1 % 2 == 0) {
        n1 = 1;
    } else {
        n1 = 0;
    } // end if

    // return the new value of n1
    return n1;
} // end evenOrOdd

