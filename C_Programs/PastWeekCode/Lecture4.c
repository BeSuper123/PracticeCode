/*
Programs Description: This program shows the code learnt in thr lecture

Author: Blessing Ugochukwu

Date: 09/10/23
*/

#include <stdio.h>

int main() {
    float bal = 0;

    printf("Enter you bank balance: ");
    scanf("%f", &bal);

    if (bal > 0) {
        printf("You have mula!");
    } 
    
    else {
        printf("You little brokie, go to work!");
    }

    return 0;
}