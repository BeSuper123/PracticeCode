/*
Programs Description: This program demonstrates
    (a) creating two functions called sum() and average()
    (b) asking for 3 integer numbers
    (C) returning the answer and solving the problem depending on the specific method

Author: Blessing Ugochukwu

Date: 01/02/24
*/
#include <stdio.h>

#define SIZE 3

// function signmatures
void sum(int, int, int);
void average(int);


int main() {
    int num1, num2, num3;


    // allows the user to enter 3 integers
    printf("Enter 3 integers: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

   
    // find the sum of the 3 numbers and prints the numbers entered and the sum of the numbers the user inputted
    sum(num1, num2, num3);

    return 0;
} // end main() method

// finds the sum of 3 whole numbers
void sum(int n1, int n2, int n3) {
    int total;


    // changes the value of the varable total to be the sum of all 3 numbers
    total = n1 + n2 + n3;
    printf("\nThe sum of %d, %d, and %d is %d", n1, n2, n3, total);

    average(total);
} // end sum() method

// finds the average of 3 whole numbers
void average(int n1) {
    float avg;


    // changes the value of the variable avg to be the average value of the 3 numbers
    avg = (float)n1 / SIZE;

    // prints the average value of the sum
    printf("\nThe average of %d is %.2f", n1, avg);
} // end average() method