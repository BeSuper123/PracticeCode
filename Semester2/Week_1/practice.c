#include <stdio.h>

int z;
int a;
int b;



int main() {
    add(10, 5);
    printf("\n");

    sub(10, 5);
    printf("\n");

    mul(10, 5);
    printf("\n");

    div(10, 5);
    printf("\n");

}

void add(a, b) {
    z = a + b;
    printf("Add: %d", z);
}

void sub(a, b) {
    z = a - b;
    printf("Subtract: %d", z);
}

void mul(a, b) {
    z = a * b;
    printf("Multiply: %d", z);
}

void div(a, b) {
    z = a / b;
    printf("Divide: %d", z);
}

