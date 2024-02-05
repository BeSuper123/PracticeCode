/*
Programs Description: This program demonstrates whether an integer is even or odd

Author: Blessing Ugochukwu

Date: 16/10/23
*/
#include <stdio.h>

int main() {
    int isEvenOdd = 0;


    printf("Enter an integer from 1 to 100:\n");
    scanf("%d", &isEvenOdd);

    if(isEvenOdd < 0 || isEvenOdd > 100) {
        printf("\nYou did not enter an integer from 1 to 100");

    } 

    else if(isEvenOdd % 2 == 0) {
        printf("\nNumber %d is Even", isEvenOdd);
    }

    else {
        printf("\nNumber %d is Odd", isEvenOdd);
    }
}