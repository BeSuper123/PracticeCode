/*
Programs Description: This program shows the changes from code with errors to code without errors

Author: Blessing Ugochukwu

Date: 25/09/23
*/

#include <stdio.h> // took out the 'u'

int main() {
//Program to illustrate errors in a C program
    int num1, num2; //added a comma
    float num3;

    num1 = 400;
    num2 = 600; //put the variable first
    num3 = num2;

    //the next 2 lines have the variables added and the right declarations for them
    printf("num1 contains %d\n", num1); 
    printf("num2 contains %d and num3 contains %f\n", num2, num3);

    return 0;
}
