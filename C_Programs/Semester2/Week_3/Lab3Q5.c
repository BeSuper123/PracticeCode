/*
Programs Description: This program demonstrates using a 1-D array to check if the number is even or odd and returning the number
of even integers

Author: Blessing Ugochukwu

Date: 15/02/24
*/
#include <stdio.h>

#define SIZE 5

// function assignments
int evenOrOdd(int []);

int main() {
    int numbers[SIZE], i, total;


    // asks the user to enter in 5 numbers
    printf("Enter %d integers: \n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
    } // end for

    // returns the total amount of even numbers
    total = evenOrOdd(numbers);

    // prints the total number of even numbers
    printf("\n\nNumber of even numbers: %d", total);

    // returns 0 to end the program
    return 0;

} // end main

// finds out if the number is even or odd
int evenOrOdd(int nums[]) {
    int i, count = 0;


    // checks to see if the number is even or odd
    for (i = 0; i < SIZE; i++) {
        
        if (nums[i] % 2 == 0) {
            // prints the number is even
            printf("\n%d is Even", nums[i]);

            // increments by 1
            count++;

        } else {
            // prints the number is odd
            printf("\n%d is Odd", nums[i]);

        } // end if

    } // end for

    // returns the value of count
    return count;

} // end evenOrOdd