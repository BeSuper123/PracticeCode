/*
Programs Description: This program demonstrates the rest of the lab

Author: Blessing Ugochukwu

Date: 09/10/23
*/

#include <stdio.h>

int main() {
    float F = 0;
    float C = 0;

    printf("Enter a degree in Farenheit: ");
    scanf("%f", &F);


    C = (F - 32) * (5/9);
    printf("The degree you entered in Celcius is %.3f", C);

    return 0;
}