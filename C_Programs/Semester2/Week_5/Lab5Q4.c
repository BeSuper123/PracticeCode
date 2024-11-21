/*
Programs Description: This program demonstrates using two functions to show
    (a) tells the user what the first word is
    (b) shows the length of the concatenated word
    (c) tells the user if the words are the same or different

Author: Blessing Ugochukwu

Date: 29/02/24
*/
#include <stdio.h>
#include <string.h>

#define SIZE 50

// function assignments
void concat(char []);
void lengthOfWord(char []);

int main() {
    char firstWord[SIZE];
    char secondWord[SIZE];


    // asks the user to enter in the first word
    printf("Enter in a word: ");
    fgets(firstWord, SIZE, stdin);

    // changes the character at the end of both words to '\0' to get rid of the '\n'
    firstWord[strlen(firstWord) - 1] = '\0';
    secondWord[strlen(secondWord) - 1] = '\0';

    // asks the user to enter in another word
    printf("Enter in a word: ");
    fgets(secondWord, SIZE, stdin);

    // concatenates the first word with another string
    concat(firstWord);

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

// concatenates the first word with another string
void concat(char fWord[]) {
    // copies the sentance into the variable concatWord    
    char concatWord[SIZE] = "First word entered is ";


    //strcpy(concatWord, "First word entered is ");

    // concatenates the first word onto the end of the concatWord variable
    strcat(concatWord, fWord);

    // like print, it prints what the concat word is
    puts(concatWord);

    // displays the length of the concatenated word
    lengthOfWord(concatWord);

} // end concat

// finds and displays the length of the concatenated word
void lengthOfWord(char word[]) {
    // prints the length of the word
    printf("\nThe length of the concatenated word is %d characters", strlen(word));

} // end lengthOfWord