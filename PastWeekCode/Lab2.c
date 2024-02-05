/*
Programs Description: This program calculates the volume and surface area of a cuboid, 
an dcalculates the area of a circle

Author: Blessing Ugochukwu

Date: 02/09/23
*/

#include <stdio.h>

int main() {
    float height = 10;
    float length = 11.5;
    float width = 2.5;
    float r = 4.8;
    float pi =  3.14;

    float vol = height * length * width;

    float x = length * length;
    float surfArea = x * 6;

    float area = pi * (r * r);

    printf("----------------PART I----------------\n");

    printf("The volume: %fcm^3", vol);

    printf("\nThe surface area: %fcm^2", surfArea);

    printf("\n\n----------------PART II----------------\n");

    printf("The area: %fcm", area);







    return 0;
}