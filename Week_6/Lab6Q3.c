/*
Programs Description: This program checks if the user input is divisible by 1 - 20

Author: Blessing Ugochukwu

Date: 23/10/23
*/

/*
Question:
Write a program that asks the user to enter a number between 1 - 5. Your program
should display all the numbers between 1 - 20 that are evenly divisible by this
number. You will need to use a loop.
*/
#include <stdio.h>

int main() {
    int i = 1;
    int userInput = 0;

    printf("Enter a number from 1 - 5: \n");
    scanf("%d", &userInput);

    //prints numbers evenly divisible by user input
    for (i = 1; i <= 20; i++) {
        //checks if number is evenly divisible by the number
        if (i % userInput == 0) {
            
            printf("\n%d IS evenly divisible by %d", i, userInput);
        }
    } // end for
    
} // end main()