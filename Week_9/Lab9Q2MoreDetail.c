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
    int ans = 5;
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

    // allows the user to enter values
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            scanf("%d", &arr[i][j]);
        } // end for
    } // end for

    while (ans != 0) {
        // allows the user to choose what output they would like
        printf("\nPlease enter the number you would like to view:\n");
        printf("1: View the values entered \n2: View the largest and smallest value\n");
        printf("3: View the average value \n0: End program\n");

        printf("Answer --> ");
        scanf("%d", &ans);

        if (ans == 1) {
            printf("\n-----------------------------------------------");
            // PART B OF THE QUESTION
            printf("\n");
            for (i = 0; i < ROW; i++) {
                printf("Row %d:\n", (i + 1));
                for (j = 0; j < COL; j++) {
                    printf("\tCol %d: %d\n", (j + 1), arr[i][j]);
                }
            }
            printf("-----------------------------------------------\n");

        } 
        else if (ans == 2) {
            printf("\n-----------------------------------------------");
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
                } // end for
            } //end for

            printf("\n%d is the largest number. Location --> Row %d, Col %d", largest, (largestRow + 1), (largestCol + 1));

            printf("\n%d is the smallest number. Location --> Row %d, Col %d\n", smallest, (smallestRow + 1), (smallestCol + 1));

            printf("-----------------------------------------------\n");
        }
        else if (ans == 3) {
            printf("\n-----------------------------------------------");
            // PART D OF THE QUESTION
            for (i = 0; i < ROW; i++) {
                for (j = 0; j < COL; j++) {
                    average += arr[i][j];
                } // end for
            } // end for

            average = average/(ROW*COL);
            printf("\nThe average of the entered values is %d\n", average);

            printf("-----------------------------------------------\n");
        }
        else if (ans == 0) {
            printf("\n-----------------------------------------");
            printf("\n\t\tBye Bye!\n");
            printf("-----------------------------------------\n");
        }
        else {
            printf("\n-----------------------------------------------");

            printf("\nThat is not a valid entry. Please try again\n");

            printf("-----------------------------------------------\n");
        } 

    } // end while
    
    return 0;
}