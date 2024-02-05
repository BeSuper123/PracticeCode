/*
Programs Description: This program demomnstrates turning farenheit into celcius

Author: Blessing Ugochukwu

Date: 06/11/23
*/
#include <stdio.h>

#define SIZE 3

int main() {
    int i;
    int farenheit[SIZE];
    int celcius[SIZE];

    printf("Enter %d temperatures:\n", SIZE);

    for (i = 0; i < SIZE; i++) {
        scanf("%d", &farenheit[i]);
    }

    for (i = 0; i < SIZE; i++) {
        celcius[i] = (farenheit[i] - 32) * (5.0/9.0);

        printf("\nFarenheit: %d, Celcius: %d", farenheit[i], celcius[i]);
    }

    return 0;
}
