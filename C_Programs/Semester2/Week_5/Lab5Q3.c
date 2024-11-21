/*
Programs Description: This program demonstrates using fgets() and strcmp() and tells the user 
if the words are the same or different

Author: Blessing Ugochukwu

Date: 29/02/24
*/
#include <stdio.h>
#include <string.h>

#define SIZE 0

int main() {
    char firstWord[SIZE];
    char secondWord[SIZE];


    // asks the user to enter in the first word
    printf("Enter in a word: ");
    fgets(firstWord, SIZE, stdin);

    // asks the user to enter in another word
    printf("Enter in a word: ");
    fgets(secondWord, SIZE, stdin);

    // checks if the words are the same or different
    if (strcmp(firstWord, secondWord) == 0) {
        //prints that the words are the same
        printf("\nThese words are the same");

    } else {
        // prints that the words are different
        printf("\nThese words are different");

    } // end for

    return 0;

} // end main