/*
Programs Description: This program demonstrates using nested structures to 
    (a) create data for a person
    (b) displays the user's data in the structure
    (c) copies person1's structure with person2's structure
    (d) displays the second person's new data

Author: Blessing Ugochukwu

Date: 14/03/24
*/
#include <stdio.h>
#include <string.h>

#define SIZE 20

// structure templates
struct date {
    int day;
    int month;
    int year;
};

struct bioData {
    char firstname[SIZE];
    char surname[SIZE];
    struct date DOB;
    float height;
    float weight;
    char eyeColour[SIZE];
    char country[SIZE];
};

int main() {
    // PART A
    // initialises the first person with their details
    struct bioData person1 = {
        "Blessing",
        "Ugochukwu",
        {8, 2, 2005},
        166,
        87,
        "Brown",
        "Ireland"
    };

    // initialises the second person
    struct bioData person2;

    // PART B
    // displays the first person's data
    printf("*%s's Details* \n\n", person1.firstname);
    printf("Name: %s %s \nDate of Birth: %d/%d/%d \nHeight: %.1f \nWeight: %.1f \nEye Colour: %s \nCountry of Citizenship: %s",
    person1.firstname, person1.surname, person1.DOB.day, person1.DOB.month, person1.DOB.year, person1.height, person1.weight, 
    person1.eyeColour, person1.country);

    // PART C
    // copys the data from person1 to person2
    person2 = person1;

    // modifies the details of person2
    strcpy(person2.firstname, "Rebecca");
    strcpy(person2.surname, "Bowe");
    person2.DOB.day = 14;
    person2.DOB.month = 4;
    person2.DOB.year = 2005;
    person2.height = 175;
    person2.weight = 57;
    strcpy(person2.eyeColour, "Blue");
    strcpy(person2.country, "Ireland");

    // PART D
    // prints the second persons details
    printf("\n\n*%s's Details* \n\n", person2.firstname);
    printf("Name: %s %s \nDate of Birth: %d/%d/%d \nHeight: %.1f \nWeight: %.1f \nEye Colour: %s \nCountry of Citizenship: %s",
    person2.firstname, person2.surname, person2.DOB.day, person2.DOB.month, person2.DOB.year, person2.height, person2.weight, 
    person2.eyeColour, person2.country);

    return 0;

} // end main