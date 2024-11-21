/*
Programs Description: This program demonstrates using a 1-D array to find the average number out of given integers

Author: Blessing Ugochukwu

Date: 15/02/24
*/
#include <stdio.h>

#define SIZE 5

// function assignments
int averageValue(int []);

int main() {
    int numbers[SIZE];
    int i;
    float avg;


    // asks the user to enter 5 integers
    printf("Enter %d integers: \n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
    } // end for

    // finds the average number of given integers
    avg = averageValue(numbers);

    printf("\nThe average value is %.1f", avg);

} // end main

// finds the average value of given integers
int averageValue(int nums[]) {
    int i;
    float average = 0;


    // calculates the average value
    for (i = 0; i < SIZE; i++) {
        average = average + nums[i];
    }

    // divides the current number by the amount of numbers 
    average = average / SIZE;

    // returns the value of average
    return average;

} // end averageValue