/*
Programs Description: This program demomnstrates swapping numbers in an array

Author: Blessing Ugochukwu

Date: 06/11/23
*/
#include <stdio.h>

#define SIZE 4

int main() {
    int i;
    int temp;
    int arr[SIZE];

    printf("Enter %d integers:\n", SIZE);

    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    for (i = 0; i < SIZE; i++) {
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        i++;
    }

    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }

    

}