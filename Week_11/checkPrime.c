/*
Programs Description: This program checks if a positive integer is prime or not

Author: Blessing Ugochukwu

Date: 30/11/23
*/
#include <stdio.h>
#include <stdbool.h>

int main() {
    // Declaring Variables
    int i;
    bool isPrime = true;
    int N = 0;


    // Verifying N is a positive integer
    while (N <= 0) {
        // Allows the user to enter a positive integer
        printf("Enter a positive integer: ");
        scanf("%d", &N);
        printf("\n");
    } // End while

    // Calculates if N is prime or not
    for (i = 2; i < N; i++) {
        // Changes the value of isPrime if it is divisible by anything other than 1 and itself
        if (N % i == 0) {
            isPrime = false;
        } // End if

    } // End for

    // Prints that the value is prime if isPrime is the value is prime or not
    if (isPrime == true) {
        printf("%d is Prime", N);
    } else {
        printf("%d is not Prime", N);
    } // End if

    return 0;
} // End Program