/*
Program Description: This program demonstrates finding miles per litre using pointer notation

Author: Blessing Ugochukwu

Date: 11/12/2023
*/
#include <stdio.h>

#define SIZE 5

int main() {
    int i;
    float litres[SIZE] = {11.5, 11.21, 12.7, 12.6, 12.4};
    float miles[SIZE] = {471.5, 358.72, 495.3, 453.6, 421.6};
    int mpl[SIZE]; // Displays the miles per litre


    for (i = 0; i < SIZE; i++) {
        *(mpl + i) = *(miles + i) * *(litres + i);    
    }
    
    printf("Miles per Litre: ");

    for (i = 0; i < SIZE; i++) {
        printf("%d ", *(mpl + i));
    }

    return 0;
}