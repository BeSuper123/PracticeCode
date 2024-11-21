/*
Programs Description: This program demonstrates using a 1-D array to find the highest number out of given integers

Author: Blessing Ugochukwu

Date: 15/02/24
*/
#include <stdio.h>

#define SIZE 5

// function assignments
int highestValue(int []);

int main() {
    int i, numbers[SIZE], highest;


    // asks the user to enter 5 integers
    printf("Enter %d integers: \n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
    } // end for

    // finds the highest value
    highest = highestValue(numbers);

    // prints the highest number
    printf("\nHighest Number: %d", highest);

} // end main

// finds the highest value of given numbers
int highestValue(int nums[]) {
    int highest = nums[0], i;


    // find the highest number
    for (i = 1; i < SIZE; i++) {
        if (nums[i] > highest) {
            highest = nums[i];
        } // end if

    } // end for

    // returns the highest number
    return highest;

} // end highestValue