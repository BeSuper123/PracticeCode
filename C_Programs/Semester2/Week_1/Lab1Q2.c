/*
Programs Description: This program demonstrates
    (a) creating two functions called sum() and average()
    (b) asking for 3 integer numbers
    (C) returning the answer and solving the problem depending on the specific method

Author: Blessing Ugochukwu

Date: 01/02/24
*/
#include <stdio.h>

// #define SIZE 10

void stars(char, int);


int main() {
    char char1;
    int num1;


    printf("Enter an integer: ");
    scanf("%d", &num1);

    while (getchar() != '\n');
    printf("\nEnter a character: ");
    scanf("%c", &char1);

    stars(char1, num1);
    printf("\n");
}

void stars(char c1, int n1) {
    int i;


    for (i = 0; i < n1; i++) {
        printf("%c", c1);
    }
}