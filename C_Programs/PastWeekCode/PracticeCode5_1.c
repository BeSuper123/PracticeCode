/*
Programs Description: This program demonstrates how loops work (expecially do while loops)

Author: Blessing Ugochukwu

Date: 11/10/23
*/

#include <stdio.h>

int main() {
    int num = 0;
    int sum = 0;
    int i = 0;

    for (int i = 0; i < 10; i++) {
        printf("hello\n");
    }
    
    i = 0;
    while (i < 10) {
        printf("bonsoir\n");
        i++;
    }
    
    i = 0;
    do {
        printf("salut\n");
        i++;
    } while (i < 10);

    return 0;
}