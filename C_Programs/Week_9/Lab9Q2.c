/*
Programs Description: This program uses 2D arrays to

Author: Blessing Ugochukwu

Date: 13/11/23
*/
#include <stdio.h>

#define ROW 3
#define COL 2

int main() {
    int i;
    int j;
    int largestRow;
    int largestCol;
    int smallestRow;
    int smallestCol;
    int largest;
    int smallest;
    int average = 0;
    int arr[ROW][COL];


    // PART A OF THE QUESTION
    printf("Enter %d values: \n", ROW*COL);

    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // PART B OF THE QUESTION
    printf("\n");
    for (i = 0; i < ROW; i++) {
        printf("Row %d:\n", (i + 1));
        for (j = 0; j < COL; j++) {
            printf("\tCol %d: %d\n", (j + 1), arr[i][j]);
        }
    }

    // PART C OF THE QUESTION
    largest = arr[0][0];
    smallest = arr[0][0];
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            if (largest <= arr[i][j]) {
                largest = arr[i][j];
                largestRow = i;
                largestCol = j;
            }

            if (smallest >= arr[i][j]) {
                smallest = arr[i][j];
                smallestRow = i;
                smallestCol = j;
            }
        }
    }

    printf("\n%d is the largest number. Location --> Row %d, Col %d", largest, (largestRow + 1), (largestCol + 1));

    printf("\n%d is the smallest number. Location --> Row %d, Col %d", smallest, (smallestRow + 1), (smallestCol + 1));

    // PART D OF THE QUESTION
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            average += arr[i][j];
        }
    }

    average = average/(ROW*COL);
    printf("\n\nThe average of the entered values is %d", average);

    return 0;
}