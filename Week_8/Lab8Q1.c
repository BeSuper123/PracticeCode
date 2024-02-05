/*
Programs Description: This program demomnstrates adding integers from one array into another

Author: Blessing Ugochukwu

Date: 06/11/23
*/
#include <stdio.h>

#define SIZE 5

int main() {
    int i;
    int firstArray[SIZE];
    int secondArray[SIZE];

    printf("Enter %d integers:\n", SIZE);

    for (i = 0; i < SIZE; i++) {
        scanf("%d", &firstArray[i]);
    }

    printf("FIRST ARRAY: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", firstArray[i]);
    }

    printf("\nSECOND ARRAY: ");
    for (i = 0; i < SIZE; i++) {
        secondArray[i] = firstArray[i];

        printf("%d ", secondArray[i]);
    }

    return 0;
}