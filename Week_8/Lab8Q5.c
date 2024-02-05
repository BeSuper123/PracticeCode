/*
Programs Description: This program demomnstrates using arrays with char

Author: Blessing Ugochukwu

Date: 06/11/23
*/
#include <stdio.h>

#define SIZE 5

int main() {
    int i;
    char x;
    char arr[SIZE];

    printf("Enter %d characters:\n", SIZE);

    for (i = 0; i < SIZE; i++) {
        scanf("%c", &arr[i]);
    
        while ((x = getchar()) != '\n' && x != ' ');
    }

    printf("\n");
    for (i = 0; i < SIZE; i++) {
        printf("%c ", arr[i]);
    }
}