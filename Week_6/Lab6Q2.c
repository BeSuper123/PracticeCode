/*
Programs Description: This program demomnstrates adding values and printing the
end result

Author: Blessing Ugochukwu

Date: 23/10/23
*/

#include <stdio.h>

int main() {
    int i = 0;
    int value = 0;
    int totalValue = 0;

    //checks if value is a positive number
    while (value <= 0) {
        printf("Enter a positive number: \n");
        scanf("%d", &value);

        if (value < 0) {
            printf("Error! Please try again!\n\n");
        }
    }

    //tells user the number they initially entered
    printf("\nValue entered is %d\n", value);
    totalValue = value;

    //uses calculations whether number is even or odd
    for (i = 0; totalValue != 1; i++) {
        if (totalValue % 2 == 0) {
            totalValue = totalValue / 2;
        }
        else {
            totalValue = totalValue * 3;
            totalValue = totalValue + 1;
        }

        //tells user the new value of their number
        if (totalValue != 1) {
            printf("Next value is %d\n", totalValue);
        }
        
    }

    //show the user how many times the loop ran to get to zero
    printf("Final value %d, number of steps %d", totalValue, i);
    return 0;
}