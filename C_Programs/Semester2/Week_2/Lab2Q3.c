/*
Programs Description: This program demonstrates using pass by value to find the highest number of 3 given integers

Author: Blessing Ugochukwu

Date: 08/02/24
*/
#include <stdio.h>

#define SIZE 3

// function assignments
int highestValue(int []);

int main() {
    int numbers[SIZE];
    int highest, i;


    // allows the user to enter three integers
    printf("Enter 3 integers: \n");
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
    }

    // finds the highest value of all 3 numbers
    highest = highestValue(numbers);

    // prints the value of highest
    printf("\nHighest value: %d", highest);

} // end main

// finds the highest value of given integers
int highestValue(int nums[]) {
    int highest = nums[0];
    int i;


    // checks to see which of the integers are the highest
    for (i = 1; i < SIZE; i++) {
        if (highest < nums[i]) {
            highest = nums[i];
        } // end if
    } // end for

    // returns the highest value
    return highest;
} // end highestValue