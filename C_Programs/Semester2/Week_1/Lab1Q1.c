/*
Programs Description: This program demonstrates
    (a) creating two functions called sum() and average()
    (b) asking for 3 integer numbers
    (C) returning the answer and solving the problem depending on the specific method

Author: Blessing Ugochukwu

Date: 01/02/24
*/
#include <stdio.h>

#define SIZE 10

void stars(int);


int main() {
    stars(SIZE);
}

void stars(int n1) {
    int i;


    for (i = 0; i < SIZE; i++) {
        printf("*");
    }
}