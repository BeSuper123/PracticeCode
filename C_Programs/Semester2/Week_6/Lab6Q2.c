/*
Programs Description: This program demonstrates using two functions to 
    (a) comare a given string with the string "Hello World"
    (b) counts how frequent "is" is in the sting

Author: Blessing Ugochukwu

Date: 07/03/24
*/
#include <stdio.h>
#include <string.h>

#define SIZE 100

// function assignments
void compare(char[]);
void frequency(char[]);

int main() {
    char word[SIZE];


    // asks the user to enter in a word
    printf("Enter in a string: ");
    fgets(word, SIZE, stdin);
    
    // changes the last character to '\0'
    word[strlen(word) - 1] = '\0';

    // checks if the word is the same as "Hello World"
    compare(word);

    return 0;

} // end main

// PART A
// compares a given word to see if it is "Hello World"
void compare(char word[]) {

    // checks if the word is "Hello World"
    if (strcmp(word, "Hello World") == 0) {
        // prints that the word matches
        printf("\nThis matches with \"Hello World\"");

    } else {
        // prints that the word does not match
        printf("\nThis doesn't match with \"Hello World\"");

    } // end if

    // checks to find out if "is" is in the word
    frequency(word);

} // end compare

// PART B
// checks to see how frequent "is" is in a given word
void frequency(char word[]) {
    int frequent = 0, i, j;


    // loop to find out if "is" is in the given word
    for (i = 0; i < strlen(word); i++) {
        
        // checks if 'i' is the first character or if there is a space before it
        if (i == 0 || word[i - 1] == ' ') {

            // checks if the word "is" is isolated and the ending is a NULL character or a space
            if (word[i] == 'i' && word[i + 1] == 's' && (word[i + 2] == '\0' || word[i + 2] == ' ')) {
                // increments frequent by 1
                frequent++;

            } // end inner if

        } // end outer if

    } // end for

    // prints the amount of times "is" shows up in the program
    printf("\nThe frequency of the word \"is\" in the program: %d", frequent);

    return 0;

} // end frequent