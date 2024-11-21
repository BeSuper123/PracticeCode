/*
Programs Description: This program demonstrates using fgets() and putchar() with strings to print a name with spaces
in between the characters

Author: Blessing Ugochukwu

Date: 22/02/24
*/
#include <stdio.h>
#include <string.h>

#define SIZE 21


int main() {
    int i;
    char name[SIZE];


    // asks the user to enter in their name
    printf("Enter your Name: \n");

    // like scanf(), it takes in the user input
    fgets(name, SIZE, stdin);
    
    // prints hello
    printf("\nHello ");

    // prints the user's name with spaces in between
    for (i = 0; i < strlen(name); i++) {
        //putchar(name[i]);
        //putchar(' ');
        printf("%c ", *(name + i) );

    } // end for

    return 0;

} // end main