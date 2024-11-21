/*
Programs Description: This program demonstrates using pass by value to find the average of 3 given integers

Author: Blessing Ugochukwu

Date: 08/02/24
*/
#include <stdio.h>

#define SIZE 3

// function assignments
int averageValue(int []);

int main() {
    int numbers[SIZE];
    int avg, i;


    // allows the user to enter three integers
    printf("Enter 3 integers: \n");
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
    }

    // finds the average value of all 3 numbers
    avg = averageValue(numbers);

    // prints the value of avg
    printf("\nAverage value: %d", avg);
} // end main

// finds the average value of given integers
int averageValue(int nums[]) {
    int avg, i;


    // adds all the numbers in the array to the avg variable
    for (i = 0; i < SIZE; i++) {
        avg = avg + nums[i];
    } // end for

    // finds the total average by dividing by the amount of numbers
    avg = (float)avg / SIZE;

    // returns the average value
    return avg;
} // end averageValue