/*
Programs Description: This program checks and displays if a character is a vowel or not

Author: Blessing Ugochukwu

Date: 16/10/23
*/
#include <stdio.h>

int main() {
    char vowel = ' ';


    //allows the user to enter a vowel
    printf("Enter a vowel:\n");
    scanf("%c", &vowel);

    //checks if the vowel entered is a vowel
    switch (vowel) {
        //checks for the vowel a
        case 'a':
        case 'A':
        {
            printf("\nYou entered a vowel. \nYou entered the vowel %c", vowel);
            break;
        }

        //checks for the vowel e
        case 'e':
        case 'E':
        {
            printf("\nYou entered a vowel. \nYou entered the vowel %c", vowel);
            break;
        }

        //checks for the vowel i
        case 'i':
        case 'I':
        {
            printf("\nYou entered a vowel. \nYou entered the vowel %c", vowel);
            break;
        }

        //checks for the vowel o
        case 'o':
        case 'O':
        {
            printf("\nYou entered a vowel. \nYou entered the vowel %c", vowel);
            break;
        }

        //checks for the vowel u
        case 'u':
        case 'U' :
        {
            printf("\nYou entered a vowel. \nYou entered the vowel %c", vowel);
            break;
        }
        
        //prints if there is no vowel detected
        default: {
            printf("\nYou did not enter a vowel");
            break;

        }
    }

    return 0;
}