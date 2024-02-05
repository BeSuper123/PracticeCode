/*
Program to demonstrate arithmetic operations
*/

#include <stdio.h>
int main() {
    int var1;
    int var2;

    var1 = 0;
    var2 = 10;

    printf("var1 contains %d, var2 contains %d\n", var1, var2);

    // Let's do some arithmetic operations
    var2 = var1 + 10;
    printf("var1 contains %d, var2 contains %d\n", var1, var2);

    var1 = var2 * 3;
    printf("var1 contains %d, var2 contains %d\n", var1, var2);

    var2 = var1 - 1;
    printf("var1 contains %d, var2 contains %d\n", var1, var2);

    var2 = var1 / 5;
    printf("var1 contains %d, var2 contains %d\n", var1, var2);

    var2 = var1 % 20;
    printf("var1 contains %d, var2 contains %d\n", var1, var2);

    return 0;
}