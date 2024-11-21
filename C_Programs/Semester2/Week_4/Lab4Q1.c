/*
Programs Description: This program demonstrates using fgets() and putchar() with strings to print a name with spaces
in between the characters

Author: Blessing Ugochukwu

Date: 22/02/24
*/
#include <stdio.h>
#include <string.h>

// function assignments
void printStatements();

int main() {
    printStatements();
} // end main

void printStatements() {
    // puts a space in front before the next string 
    printf("%5s", "abcd\n");

    // no difference
    printf("%5s", "abcdef\n");

    // no difference
    printf("%-5s", "abc\n");

    // starts writing the characters from the 5th space
    printf("%5.2s", "abcde\n");

    // doesn't print
    printf("%-5.2s", "abcde\n");    
} // end print statements