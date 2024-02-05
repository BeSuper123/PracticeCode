/*
Programs Description: This program uses 2D arrays to

Author: Blessing Ugochukwu

Date: 13/11/23
*/
#include <stdio.h>

#define SIZE 15

int main() {
    int i;
    int temp;
    int arr[SIZE];

    printf("Enter %d numbers: \n", SIZE);

    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original Order: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }




    printf("\nReverse Order: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[SIZE - 1 - i]);
    }
    
}