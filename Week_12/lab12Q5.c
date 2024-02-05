/*
Program Description: This program demonstrates copying the contents of the first 
2 floating point array into the second array using pointer notation only

Author: Blessing Ugochukwu

Date: 04/12/2023
*/
#include <stdio.h>

#define SIZE 3

int main() {
    int i;
    float array1[SIZE];
    float array2[SIZE];


    // Asks the user to enter 3 float numbers         
    printf("Enter %d float numbers:\n", SIZE);

    // Adds the number the user entered into the array
    for (i = 0; i < SIZE; i++) {
        scanf("%f", & *(array1 + i));
    } // End for

    // Print statment to tell the user what is being printed next
    printf("\nContents of array1: \n");

    // Prints the contents of array1
    for (i = 0; i < SIZE; i++) {
        printf("%.2f ", *(array1 + i));
    } // End for

    // Loop copies the contents of array1 into array2
    for (i = 0; i < SIZE; i++) {
        *(array2 + i) = *(array1 + i);
    } // End for

    // Print statment to tell the user what is being printed next
    printf("\n\nContents of array2: \n");
    
    // Prints the contents of array2
    for (i = 0; i < SIZE; i++) {
        printf("%.2f ", *(array2 + i));
    } // End for

} // End Program
