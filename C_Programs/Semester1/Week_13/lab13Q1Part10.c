/*
Program Description: This program demonstrates changing the space elements in an array to the 
underscore element

Author: Blessing Ugochukwu

Date: 11/12/2023
*/
#include <stdio.h>

#define SIZE 8

int main() {
    int i;
    char chars[SIZE] = {'a', ' ', 'b', ' ', 'c', ' ', ' ', 'd'};

    for (i = 0; i < SIZE; i++) {
        printf("%c", *(chars + i));
    }

    for (i = 0; i < SIZE; i++) {
        if (*(chars + i) == ' ') {
            *(chars + i) = '_';
        }
    }

    printf("\n");
    for (i = 0; i < SIZE; i++) {
        printf("%c", *(chars + i));
    }
}