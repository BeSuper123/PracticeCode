#include <stdio.h>

int main() {
    int num1 = 1;
    int num2 = 2;
    int num3, num4;


    num3 = ++num1;

    num4 = num2++ + --num3;

    printf("num3 is %d and num4 is %d", num3, num4);

    return 0;
}