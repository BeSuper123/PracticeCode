/*
Programs Description: This program demonstrates using nested structures to 
    (a) get the number of athletes that qualified
    (b) allocate memory using the number given
    (c) enters in the details for each athlete
    (d) check if Paddy Jim O'Brien is participating in the event

Author: Blessing Ugochukwu

Date: 11/04/24
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGTH 20

// structure templates
// PART 1
struct DOB {
    int day; // dd
    int month; // mm
    int year; // yyyy
};

struct athleteDeets {
    char firstname[LENGTH];
    char surname[LENGTH];
    char nationality[LENGTH];
    struct DOB date;
    float height;
    float weight;
    char event[LENGTH];
};

// function assignments
void getAthleteData(struct athleteDeets *, int);
void checkAthlete(struct athleteDeets *, int);

int main() {
    int numbers;
    struct athleteDeets *athletes;


    // PART 2
    // allows the user to enter the number of finalists
    printf("Enter the number of finalists: ");
    scanf("%d", &numbers);

    // allocates memory to ptr based on the number entered
    athletes = calloc(numbers, sizeof(int));

    // checks if memory allocation was successful or not
    if (athletes == NULL) {
        printf("Memory allocation unsuccessful");
    } else {
        // clears input buffer
        while(getchar() != '\n');

        // PART 3
        // allows data input for the athletes
        getAthleteData(athletes, numbers);

        // PART 4
        // checks for the name Paddy Jim O'Brien
        checkAthlete(athletes, numbers);

    } // end if

    // frees the allocated memory
    free(athletes);

} // end main

// enters in the athletes details
void getAthleteData(struct athleteDeets *athletes, int numbers) {
    int i;


    // loop to enter in the athletes details
    for (i = 0; i < numbers; i++) {
        // asks the user to enter in the athletes firstname
        printf("\nEnter athlete %d's firstname: ", i + 1);
        fgets((athletes + i)->firstname, LENGTH - 1, stdin);
        
        // asks the user to enter in the athletes surname
        printf("\nEnter athlete %d's Surname: ", i + 1);
        fgets((athletes + i)->surname, LENGTH - 1, stdin);

        // asks the user to enter in the athletes nationality
        printf("\nEnter athlete %d's Nationality: ", i + 1);
        fgets((athletes + i)->nationality, LENGTH - 1, stdin);

        // asks the user to enter in the athletes DOB
        printf("\nEnter athlete %d's Date of Birth: [dd mm yyyy] \n", i + 1);
        scanf("%d", &(athletes + i)->date.day);
        scanf("%d", &(athletes + i)->date.month);
        scanf("%d", &(athletes + i)->date.year);

        // asks the user to enter in the athletes height
        printf("\nEnter athlete %d's Height: ", i + 1);
        scanf("%f", &(athletes + i)->height);

        // asks the user to enter in the athletes weight
        printf("\nEnter athlete %d's Weight: ", i + 1);
        scanf("%f", &(athletes + i)->weight);

        // clears the input buffer
        while (getchar() != '\n');

        // asks the user to enter in the athletes event
        printf("\nEnter athlete %d's Event: ", i + 1);
        fgets((athletes + i)->event, LENGTH - 1, stdin);

    } // end for

} // end getAthleteData

// checks every record to find Paddy Jim O'Brien
void checkAthlete(struct athleteDeets *athletes, int numbers) {
    int i;


    // loop to find the the name Paddy Jim O'Brien
    for (i = 0; i < numbers; i++) {
        if (strcmp((athletes + i)->firstname, "Paddy Jim\n") == 0 && strcmp((athletes + i)->surname, "O'Brien\n") == 0 && 
        strcmp((athletes + i)->nationality, "Irish\n") == 0) {
            printf("\n--That is a participant in this event--");
            return; 

        } // end if

    } // end for

    // prints if the name was still not found
    printf("\n--That is not a participant in this event--");

} // end checkAthlete