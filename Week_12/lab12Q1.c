/*
Program Description: This program demonstrates assigning items to pointers

Author: Blessing Ugochukwu

Date: 05/12/2023 
*/
#include <stdio.h>

int main() {
    int num = 9;
    char letter = 'd';
    int *ptr1;
    char *ptr2;


    ptr1 = &num;
    ptr2 = &letter;


    printf("Contents of num: %d \nMemory address of num: %p", *ptr1, ptr1);
    printf("\n\nContents of letter: %c \nMemory address of letter: %p", *ptr2, ptr2);

    return 0;
}