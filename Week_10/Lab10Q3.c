/*
Programs Description: This program uses 2D arrays for multiplication

Author: Blessing Ugochukwu

Date: 22/11/23
*/
#include <stdio.h>

#define ROW 3
#define COL 2

int main() {
    int i;
    int j;
    int total;
    int arr[ROW][COL];


    // Part A
    printf("Enter %d numbers: \n", ROW*COL);
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Part B
    printf("\n");
    for (i = 0; i < ROW; i++) {
        total = 0;
        for (j = 0; j < COL; j++) {
            total += arr[i][j];
        }
        printf("Sum of row %d: %d\n", i, total);
    }

    // Part C
    printf("\n\n");
    for (i = 0; i < COL; i++) {
        total = 0;
        for (j = 0; j < ROW; j++) {
            total += arr[j][i];
        }
        printf("Sum of col %d: %d\n", i, total);
    }

    // Part D
    printf("\n");
    total = arr[0][0];
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            if (arr[i][j] > total) {
                total = arr[i][j];
            }
        }
    }

    printf("\nHighest number: %d", total);

    return 0;
}