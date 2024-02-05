/*
Programs Description: This program uses 2D arrays to

Author: Blessing Ugochukwu

Date: 13/11/23
*/
#include <stdio.h>

#define SIZE 10
int main() {
    int arr[SIZE];
    int i;

    for (i = 0; i < 10; i++) {
        arr[i] = 9 - i;
    }
    printf("%d", arr[8]);
    // Display the contents of arr[8]
    for (i = 0; i < 10; i++) {
        arr[i] = arr[ arr[i] ];
    }

    printf("\n%d", arr[8]);

    // Display the contents of arr[8]
}