/*
Programs Description: This program demonstrates using a 1-D array to find the highest number out of given integers

Author: Blessing Ugochukwu

Date: 15/02/24
*/
#include <stdio.h>

#define SIZE 5

// function assignments
void Multiplications(int []);

int main() {
    int i, numbers[SIZE];


    // asks the user to enter 5 integers
    printf("Enter %d integers: \n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
    } // end for

    // multiplies each value in the array by 2
    Multiplications(numbers);

    // prints the new array
    printf("\nNew Array\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    } // end for

} // end main

// multiplies each value in the array by 2
void Multiplications(int nums[]) {
    int i;


    // multiplies each number by 2
    for (i = 0; i < SIZE; i++) {
        nums[i] = nums[i] * 2;

    } // end for

} // end highestValue