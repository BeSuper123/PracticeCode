/*
Programs Description: This program demomnstrates a guessing game

Author: Blessing Ugochukwu

Date: 20/10/23
*/
#include <stdio.h>

int main() {
    int i = 0;
    int guess = 0;

    while (guess != target) {
        printf("Guess a number from 1 - 100: ");
        scanf("%d", &guess);
    }

    printf("You guessed it correctly!");
        
    
}