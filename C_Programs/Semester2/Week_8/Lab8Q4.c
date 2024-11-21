/*
Programs Description: This program demonstrates using structures to create data for passengers and to display the data

Author: Blessing Ugochukwu

Date: 21/03/24
*/
#include <stdio.h>
#include <string.h>

#define SIZE 20
#define LEN 3

// changes the word char to STRING for the character arrays
typedef char STRING;

// structure template
struct cityDeets {
    STRING cityName[SIZE];
    int population;
    float annualRainfall;
    float annualSunshine
};

int main() {
    struct cityDeets city1 = {
        "Dublin", 
        544107, 
        683, 
        1503

    };

    struct cityDeets city2 = {
        "Cork",
        124391, 
        1048, 
        1417
    };

    struct cityDeets city3 = {
        "Monaghan", 
        61386, 
        66.17, 
        184
    };

    STRING highest[SIZE], lowest[SIZE], high[SIZE], low[SIZE];
    float i, *a, *b, *c, *d;

    struct cityDeets *ptr1, *ptr2, *ptr3;


    ptr1 = &city1;
    ptr2 = &city2;
    ptr3 = &city3;

    a = &ptr1->annualRainfall;
    b = &ptr1->annualRainfall;
    c = &ptr1->annualSunshine;
    d = &ptr1->annualSunshine;

    
    if (a < *ptr2->annualRainfall) {

        if (a < &ptr3->annualRainfall) {
            a = &ptr3->cityName;
        } else {
            a = &ptr2->cityName;
        }

    } else if (a < &ptr3->annualRainfall) {

        a = &ptr3->cityName;

    }

    if (lowest > *ptr2->annualRainfall) {

        if (lowest > *ptr3->annualRainfall) {
            lowest = *ptr3->cityName;
        } else {
            lowest = *ptr2->cityName;
        }

    } else if (lowest > *ptr3->annualRainfall) {

        lowest = *ptr3->cityName;

    }
    

    if (high < *ptr2->annualSunshine) {

        if (high < *ptr3->annualSunshine) {
            high = *ptr3.cityName;
        } else {
            high = *ptr2.cityName;
        }

    } else if (high < *ptr3->annualSunshine) {

        high = *ptr3.cityName;

    }
    

    if (low > *ptr2->annualSunshine) {

        if (low > *ptr3->annualSunshine) {
            low = *ptr3->cityName;
        } else {
            low = *ptr2->cityName;
        }

    } else if (low > *ptr3->annualSunshine) {

        low = *ptr3.cityName;

    }
    
    
    

    printf("Highest Rainfall: %s \nLowest Rainfall %s \nHighest Sunshine: %s \nLowest Sunshine: %s", 
    highest, lowest, high, low);
    
    return 0;

} // end main