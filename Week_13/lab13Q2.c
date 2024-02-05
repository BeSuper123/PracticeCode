/*
Program Description: This program demonstrates using DMA to:
    (a). Allocate memory for 5 floating-point numbers using either malloc() or calloc()
    (b). Allows the user to enter data for those numbers
    (c). Calculate and display the average of numbers stored in that memory block

Author: Blessing Ugochukwu

Date: 11/12/2023
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int floatNumbers;
    float noBytes;
    float *ptr;
    float total;


    printf("Please enter the number of float numbers you would like to enter: \n");
    scanf("%d", &floatNumbers);

    ptr = malloc(noBytes);

    noBytes = floatNumbers * sizeof(float);

    if (ptr == NULL) {
        printf("\nFailed to allocate memory\n");
    } else { 
        // Memory allocated successfully - go and use it
        printf("\nMemory allocated successfully\n");
        printf("\nEnter %d float numbers\n", floatNumbers);

        // Enter data items into the allocated memory block
        for (i = 0; i < floatNumbers; i++) {
            scanf("%f", & *(ptr + i));
        } 

        // Display the data items entered into the allocated memory block
        for(i = 0; i < floatNumbers; i++) {
            total += *(ptr + i);
        }

        // Prints the average number of all the students entered
        total = total/floatNumbers;
        printf("\nThe average age of students: %.5f", total);

        // Free the allocated memory block once finished using it
        free(ptr);
    }
}