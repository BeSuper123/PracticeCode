/*
Programs Description: This program demonstrates how a switch works

Author: Blessing Ugochukwu

Date: 11/10/23
*/

#include <stdio.h>

int main() {
    char color = ' ';

    printf("Please enter the first letter of your favourite color: \n");
    scanf("%c", &color);
    
        while (getchar() != '\n') {;

        switch (color) {
            case 'y' : 
                printf("Helloooooo!");
                break;
            
            case 'c': 
                printf("Goodbye");
                break;

            default:
                printf("Error!!");

        
        

        }
    }
    return 0;
}
