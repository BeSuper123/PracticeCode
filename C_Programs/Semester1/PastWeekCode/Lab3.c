/*
Programs Description: This program demonstrates using three float inputs and
calculating the sum and averages.

Author: Blessing Ugochukwu

Date: 09/10/23
*/

#include <stdio.h>

int main() {
    float firstFloat = 0;
    float secondFloat = 0;
    float thirdFloat = 0;

    float sum = 0;
    float average = 0;

    //allows the user to add values to the float numbers
    printf("Enter any float number: ");
    scanf("%f", &firstFloat);

    printf("Enter a second float number: ");
    scanf("%f", &secondFloat);

    printf("Enter a third float number: ");
    scanf("%f", &thirdFloat);

    //prints out the sum of all the entered float numbers
    sum = firstFloat + secondFloat + thirdFloat;
    printf("\nThe sum of all your numbers is %.3f", sum);

    //prints out the average of all the entered float numbers
    average = sum/3;
    printf("\nThe average of your numbers is %.3f", average);

    return 0;
}