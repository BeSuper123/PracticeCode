/*
Programs Description: This program shows the answers to the questions form the lab

Author: Blessing Ugochukwu

Date: 04/10/23
*/

#include <stdio.h>

int main() {
    //variables for the first question
    int i;
    int value = 0;

    //variables for the second question
    float point = 0;
    float x = 1;
    int divider = 0;


    printf("----------------PART I----------------\n");

    //adds the values of i into the sum to find the sum of 1 - 5
    while (i <= 5) {
        value += i;
        i++;
    }
    /*
    for (int i = 1; i <= 5; i++) {
        value += i;
    }
    */
    printf("Answer is %d", value);



    printf("\n\n---------------PART II----------------\n");

    //adds the values of x into the sum to find the sum of 1.0 - 2.0
    while(x < 2.1) {
        point += x;
        x += 0.1;
        divider++;
    }

    point = point/divider;
    printf("Average is %.2f", point);

    return 0;
    /*
     _x_|_o_|_x_
     _x_|_o_|_o_
     _o_|_x_|_o_
    */  

}