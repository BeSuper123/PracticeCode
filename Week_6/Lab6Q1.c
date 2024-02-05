/*
Programs Description: This program demomnstrates numbers 1 - 10 with commas

Author: Blessing Ugochukwu

Date: 23/10/23
*/
#include <stdio.h>

int main() {
    int i = 0;
    int j = 0;
    int total[10];
    int num = 10;

    while (i < 10) {
        total[i] = num;
        if (i != 9) {
            printf("%d,", total[i]);
        } 
        else {
            printf("%d", total[i]);
        }
            

        i++;
        num--;
    }


}