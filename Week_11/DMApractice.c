/*
Programs Description: This program demonstrates how Dynamic Memory Allocation works

Author: Blessing Ugochukwu

Date: 29/11/23
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int numbers = 0;
    int noBytes = 0;
    int size = 0;
    int *ptr;
    int i;
    int ans;
    int temp;
    int total;
    

    // PART 1
    // Allows the user to enter the amount of data items they would like
    printf("How many students are in the class: ");
    scanf("%d", &numbers);

    // PART 2
    // Assigns a variable to the sizeof() operator
    size = sizeof(int);
    

    // PART 3
    // Allocate the block of memory required
    ptr = malloc(noBytes);

    //PART 4
    // Calculate the number of bytes required to store the set of numbers in memory
    noBytes = numbers * size;

    // PART 5
    // Check if malloc was successful, i.e., check if the memory was allocated successfully
    if (ptr == NULL) {
        printf("\nFailed to allocate memory\n");
    } else { 
        
        // PART 6
        // Memory allocated successfully - go and use it
        printf("\nMemory allocated successfully\n");
        printf("\nEnter the ages of all %d students\n", numbers);

        // Enter data items into the allocated memory block
        for(i = 0; i < numbers; i++) {
            scanf("%d", & *(ptr + i));
        } 

        // PART 7
        // Allows the user to change up the size of the array if neccessary
        printf("Would you like to add more students? [1 FOR YES/ ANY NUMBER FOR NO]: ");
        scanf("%d", &ans);

        if (ans == 1) {
            printf("Enter how many more students you would like to add: ");
            scanf("%d", &temp);

            // Adds the new number of the array
            noBytes = (numbers + temp) * size;
            ptr = realloc(ptr, noBytes);
            
            // Allows the user to enter the ages of the students added
            printf("Enter the ages of the students added: \n");
            for (i = numbers; i < (numbers + temp); i++) {
                scanf("%d", & *(ptr + i));
            }
        }

        // Display the data items entered into the allocated memory block
        for(i = 0; i < (numbers + temp); i++) {
            total += *(ptr + i);
        }
        
        // PART 8
        // Prints the average number of all the students entered
        total = total/numbers;
        printf("\nThe average age of students: %d", total);


        // PART 9
        // Free the allocated memory block once finished using it
        free(ptr);
    }

    return 0;
}