/*
Programs Description: This program demonstrates using three functions to 
    (a) check how many vowels are in a given string
    (b) finds the length of the string and prints it back in reverse
    (c) concatenates the string with another string to make a new string

Author: Blessing Ugochukwu

Date: 07/03/24
*/
#include <stdio.h>
#include <string.h>

#define SIZE 100

// function assignments
void vowelCount(char[]);
void reverse(char[]);
void concat(char[]);

int main() {
    char word[SIZE];


    // asks the user to enter in a word
    printf("Enter in a string: ");
    fgets(word, SIZE, stdin);
    
    // changes the last character to '\0'
    word[strlen(word) - 1] = '\0';

    // checks if the word contains any vowels
    vowelCount(word);

    return 0;

} // end main

// PART A
// finds out if there are vowels in a given string
void vowelCount(char word[]) {
    int i, count = 0;


    // loop to find how many vowels are in the string
    for (i = 0; i < strlen(word); i++) {
        
        // finds out if the given character is a vowel
        switch (word[i]) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':

            count++;        
        } // end switch

    } // end for

    // prints the amount of vowels found in the string
    printf("\nVowels: %d", count);

    // prints the string in reverse
    reverse(word);

} // end vowelCount

// PART B
// finds the length of the string and prints the string in reverse
void reverse(char word[]) {
    int i;
    int length = strlen(word);


    // prints the length of the string
    printf("\n\nLength of word: %d", length);

    // prints the string in reverse
    printf("\nWord in reverse: ");
    for (i = 0; i < length; i++) {
        printf("%c", word[length - i - 1]);

    } // end for

    // concatenates the string with another string to make a new one
    concat(word);

} // end reverse

// PART C
// concatenates a given string with another string to make a new string
void concat(char word[]) {
    char sentence[SIZE] = "I entered the string ";


    // concatenates sentence and word together to make a new string
    strcat(sentence, word);

    // prints the new string
    printf("\n\nNew string: \"%s\"", sentence);

} // end concat