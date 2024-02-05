/*
Programs Description: This program demonstrates adding all of the even numbers from 1 to N 
and displaying the total amount

Author: Blessing Ugochukwu

Date: 30/11/23
*/
#include <stdio.h>

int main() {
    // Declaring Variables
    int i;
    int total = 0;
    int N = 0;


    // Verifying N is a positive integer
    while (N <= 0) {
        // Allows the user to enter  positive integer
        printf("Enter a positive integer: ");
        scanf("%d", &N);
        printf("\n");
    } // End while

    // Calculates all the positive integers from 1 to N
    for (i = 1; i <= N; i++) {
        // Adds the value of i to total if the integer is even
        if (i % 2 == 0) {
            total += i;
        } // End if

    } // End for

    // Prints the value of N and the values from 1 to N
    printf("Sum of even numbers from 1 to %d is %d:", N, total);

    return 0;
} // End Program