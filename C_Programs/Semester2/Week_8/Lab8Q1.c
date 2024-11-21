/*
Programs Description: This program demonstrates using structures to create data for passengers and to display the data

Author: Blessing Ugochukwu

Date: 21/03/24
*/
#include <stdio.h>
#include <string.h>

#define SIZE 20
#define LENGTH 50
#define S 2

// changes the word char to STRING for the character arrays
typedef char STRING;

// structure template
struct passengerDeets {
    STRING airlineName[SIZE];
    int flightNo;
    STRING passengerSurname[SIZE];
    int seatNo;
    STRING destination[LENGTH];
    int noOfBags;
};

// function assignments
void displayDeets();

int main() {
    // creates passengers and displays their details
    displayDeets();

    return 0;

} // end main

// creates and distplays the passenger details
void displayDeets() {
    // contains passenger details in the array
    struct passengerDeets passengers[S] = {
        {"Air Lingus", 192738, "Williams", 34, "New York", 3},
        {"Lufthansa", 182736, "Durgins", 23, "Copenhagen", 2}
    };

    int i;

    // displays the structure details for each passenger in the array
    printf("--Passenger Details--\n\n");
    for (i = 0; i < S; i++) {
        printf("Airline Name: %d\n", passengers[i].airlineName);
        printf("Flight Number: %d\n", passengers[i].flightNo);
        printf("Passenger Lastname: %d\n", passengers[i].passengerSurname);
        printf("Seat Number: %d\n", passengers[i].seatNo);
        printf("Destination: %d\n", passengers[i].destination);
        printf("Number of Bags: %d\n\n", passengers[i].noOfBags);

    } // end for

} // end displayDeets