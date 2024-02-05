/*
Programs Description: This program demonstrates how arrays work

Author: Blessing Ugochukwu

Date: 22/11/23
*/
#include <stdio.h>

#define ROW 4
#define COL 6

int main() {
    int data[ROW][COL] = { 
        {3, 2, 5, 7, 4, 2},
        {1, 4, 4, 8, 13, 1},
        {9, 1, 0, 2, 8, 3},
        {0, 2, 6, 3, -1, -8}
    };

    // declare the sum
    int i, j;
    int sum;

    // compute the sum
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            sum += data[i][j];
        }
    }

    // display the sum
    printf("Sum: %d", sum);
}

