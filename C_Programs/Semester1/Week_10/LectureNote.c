/*
Programs Description: This program demonstrates changing one char to another

Author: Blessing Ugochukwu

Date: 22/11/23
*/
#include <stdio.h>

#define SIZE 10

int main() {
    int i;
    char barack[SIZE] = {'Y', 'E', 'S', ' ', 'W', 'E', ' ', 'C', 'A', 'N'};

    for (i = 0; i < SIZE; i++) {
        printf("%c", *(barack + i));
    }

    printf("\n");
    for (i = 0; i < SIZE; i++) {
        if (*(barack + i) == ' ') {
            *(barack + i) = '_';
        }

        printf("%c", *(barack + i));
    }

    return 0;
}