/*
Programs Description: This program demomnstrates reversing the order of a secondArray

Author: Blessing Ugochukwu

Date: 06/11/23
*/
#include <stdio.h>

#define SIZE 5

int main() {

    int firstArr[SIZE];
    int secondArr[SIZE];
    int i = 0;
    int j = SIZE - 1;
    int temp = 0;

    printf("Enter %d integers:\n", SIZE);

    for (i = 0; i < SIZE; i++) {
        scanf("%d", &firstArr[i]);
        secondArr[i] = firstArr[i];
    }

    printf("\nFirst Array\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", firstArr[i]);
    }

    i = 0;
    printf("\n\nSecond Array\n");
    for (i = 0; i < SIZE; i++) {
        secondArr[i] = firstArr[(SIZE - 1) - i];
        
        
        printf("%d ", secondArr[i]);
    }
    

    return 0;
}