/*
Programs Description: This program demonstrates
    (a) creating two functions called sum() and average()
    (b) asking for 3 integer numbers
    (C) returning the answer and solving the problem depending on the specific method

Author: Blessing Ugochukwu

Date: 01/02/24
*/
#include <stdio.h>

void highOrLow(int, int, int);

int main() {
    int num1, num2, num3;


    // allows the user to enter 3 integers
    printf("Enter 3 integers: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    highOrLow(num1, num2, num3);
} // end main() method

// finds the highest and lowest number
void highOrLow(int n1, int n2, int n3) {
    int highest = n1;
    int lowest = n1;


    if (highest < n2) {
        if (highest < n3) {
            highest = n3;
        } else {
            highest = n2;
        }
    } else if (highest < n3) {
        highest = n3;
    }

    if (lowest > n2) {
        if (lowest > n3) {
            lowest = n3;
        } else {
            lowest = n2;
        }
    } else if (lowest > n3) {
        lowest = n3;
    }

    printf("\nthe highest value is %d", highest);
    printf("\nthe lowest value is %d", lowest);
}