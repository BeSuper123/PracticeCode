#include <stdio.h>
#include <string.h>

#define SIZE 6
#define LENGTH 20

int guessTheAvenger(char [][LENGTH]);
void favAvenger();

int main () {
    char avengers[SIZE][LENGTH] = {"Iron Man", "Captain America", "Black Widow", "Thor", "Hulk", "Hawkeye"};
    int i, found;


    found = guessTheAvenger(avengers);     
    

    if (found == 1) {
        printf("\nCorrect");
    } else {
            printf("\nBad Guess - Not an Avenger");
        }   

    favAvenger();
}

int guessTheAvenger(char avengers[][LENGTH]) {
    char guess[LENGTH];
    int i;


    printf("Name an Avenger: ");
    fgets(guess, LENGTH, stdin);
    guess[strlen(guess) - 1] = '\0';


    for (int i = 0; i < SIZE; i++) {
        if (strcmp(guess, avengers[i]) == 0) {
            return 1; // Correct guess
        }
    }
    
    return 0; // Incorrect guess
}

void favAvenger() {
    char favAvenger[LENGTH];
    FILE *fp;


    printf("\nWhat is your favourite Avenger: ");
    fgets(favAvenger, LENGTH, stdin);
    favAvenger[strlen(favAvenger) - 1] = '\0';

    if ( (fp = fopen("avenger.txt", "a") ) == NULL ) {
        printf("Error opening file");
    } 

    else {
        fputs(favAvenger, fp);

        printf("%s", favAvenger);

        fclose(fp);
    }
}
