#include <stdio.h>
#include <string.h>

#define SIZE 5
#define LENGTH 100

int main() {
    char names[SIZE][LENGTH] = {"ava", "blessing", "bartek", "renee", "rebecca", "john", "joseph", "daniel", "aimee"};
    char givenName[LENGTH];
    int i;


    printf("State Your Name for Entry: ");
    scanf("%s", givenName);

    for (i = 0; i < SIZE; i++) {
        if (strcmp(givenName, names[i]) == 0) {
            printf("\nHello %s", names[i]);
            break;
        } // end if

    } // end for


    if (i == SIZE) {
        printf("\nName Not Found");

    } // end if

    return 0;

} // end main