#include <stdio.h>
#include <stdlib.h>

int main () {
    int i, count = 0;
    int numbers;
    char *vowels;


    printf("Enter the number of characters you would like to enter: ");
    scanf("%d", &numbers);

    vowels = calloc(numbers, sizeof(char));

    if (vowels == NULL) {
        printf("Memory allocation failed");
    } else {
        printf("Memory allocation successful");

        printf("\n\nEnter in characters: \n");
        for (i = 0; i < numbers; i++) {
            while (getchar() != '\n');
            scanf("%c", & *(vowels + i));
        }

        for (i = 0; i < numbers; i++) {
            switch(vowels[i]) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    count++;
            }
        }

        printf("Vowels counted: %d", count);
    }

    free(vowels);

    return 0;
}