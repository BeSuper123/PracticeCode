/*
Programs Description: This program demonstrates using fgets() and putchar() with strings to print a name with spaces
in between the characters

Author: Blessing Ugochukwu

Date: 22/02/24
*/
#include <stdio.h>
#include <string.h>

#define SIZE 21

// function assignments
void nameWrite(char *);

int main() {
    char name[SIZE];


    // asks the user to enter in their name
    printf("Enter your Name: \n");

    // like scanf(), it takes in the user input
    fgets(name, SIZE, stdin);

    // prints the name value with spaces in between
    nameWrite(name);

    return 0;

} // end main

// prints the given name with spaces 
void nameWrite(char *name) {
    int i, j = 0;
    char temp, nameWithSpaces[SIZE];


    // puts the characters in name, into name with spaces, adding a space in between the characters
    for (i = 0; i < strlen(name); i += 2) {
        nameWithSpaces[i] = name[j];
        nameWithSpaces[i + 1] = ' ';

        // increments j by 1
        j++;
    } // end for

    // prints hello
    printf("\nHello ");

    // prints the nameWithSpaces string
    puts(nameWithSpaces);

} // end nameWrite