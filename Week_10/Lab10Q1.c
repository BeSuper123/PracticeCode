/*
Programs Description: This program uses 2D arrays for multiplication

Author: Blessing Ugochukwu

Date: 20/11/23
*/
#include <stdio.h>

#define ROW 3
#define COL 4

int main() {
    int i;
    int j;
    int array1[ROW][COL] = 
    {
        {2, 8, 3, 8}, 
        {5, 2, 1, 9}, 
        {7, 3, 9, 1}, 
    };
    int array2[ROW][COL] = 
    {
        {6, 9, 2, 8},
        {7, 1, 6, 2},
        {4, 7, 1, 9}
    };
    int array3[ROW][COL];

    // prints values in array1
    printf("Values for array1: ");
    for (i = 0; i < ROW; i++) {
        printf("\nRow %d:\n", i + 1);
        for (j = 0; j < COL; j++) {
            printf("\tCol %d: ", j + 1);
            printf("%d", array1[i][j]);
        }
    }

    // prints values in array2
    printf("\n\nValues for array2: ");
    for (i = 0; i < ROW; i++) {
        printf("\nRow %d:\n", i + 1);
        for (j = 0; j < COL; j++) {
            printf("\tCol %d: ", j + 1);
            printf("%d", array2[i][j]);
        }
    }

    // prints values in array3
    printf("\n\nValues for array3: ");
    for (i = 0; i < ROW; i++) {
        printf("\nRow %d:\n", i + 1);
        for (j = 0; j < COL; j++) {
            array3[i][j] = array1[i][j]*array2[i][j];
            printf("\tCol %d: ", j + 1);
            printf("%d", array3[i][j]);
        }
    }


    return 0;
}