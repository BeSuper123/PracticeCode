/*
Programs Description: This program demonstrates entering more than 1 data item

Author: Blessing Ugochukwu

Date: 03/10/23
*/

#include <stdio.h>

int main() {

    /*
    float var = 0;

    printf("Enter any float number\n");
    scanf("%f", &var);

    //Display the number entered correct to two decimal places
    printf("You've entered %.4f", var);
    */

    
    char myChar = ' ';

    //use the getchar() function
    printf("Enter any character\n");

    //use the getchar() function
    //scanf("%c", &myChar);

    //same as above
    myChar = getchar();


    //printf("\nmyChar contains %c", myChar);
    //printf("\nYou entered ");
    if (myChar == 'j') {
        printf("\nERROR");
    } else{
        putchar(3);

    }


    return 0;
}