/*
Programs Description: This program demonstrates using pass by value to find the most comonly used character of 3 given characters

Author: Blessing Ugochukwu

Date: 08/02/24
*/
#include <stdio.h>

#define SIZE 3

// function assignments
char mostCommonChar(char []);

int main() {
    char chars[SIZE];
    char mostUsed;
    int i;


    // allows the user to enter three characters
    printf("Enter %d chararcters: \n", SIZE);
    for (i = 0; i < (SIZE - 1); i++) {

        while(getchar() != '\n');
        scanf("%c", &chars[i]);

    }

    // finds the most common character of all 3 chars
    mostUsed = mostCommonChar(chars);

    if (mostUsed == '0') {
        printf("\nNo Common Characters Found");
    } else {    
        // prints the most common char
        printf("\nMost Common Char: %c", mostUsed);
    } // end if

} // end main

// finds the most common
char mostCommonChar(char characters[]) {
    int i, count, j, maxCount;
    char mostCommon = characters[0];


    // checks to see which character is the most used one
    for (i = 1; i < SIZE; i++) {
        count = 0;

        for (j = 0; j < SIZE; j++) {
            if (characters[i] == characters[j]) {
                count++;
            }
        }

        if (maxCount < count) {
            maxCount = count;
            mostCommon = characters[i];
        }

    } // end for

    if (maxCount == 1) {
        mostCommon = '0';
    }

    // returns the most common character
    return mostCommon;

} // end mostCommonChar

//smiley face :)