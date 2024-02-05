#include <stdio.h>

int main() {
    int a = 57;
    int b = 79;
    int c = 1; //temporary storage

    c = a;  //c is now 57
    a = b;  //a is now 79
    b = c; //b is now 57

    printf("%d, %d", a, b);
}