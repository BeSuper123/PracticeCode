#include <stdio.h>

// PART A
struct cards {
    int cardNo;
    char cardType[25];
};

// PART B
struct stock {
    int stockNo;
    char stockDescription[20];
    int stockQuantity;
};

// PART C
struct libraryBook {
    char ISBN[13];
    char bookTitle[30];
};

// PART D
struct customerRec {
    unsigned int cutomerID;
    char name[20];
    char address[45];
    double outstandingFees;
};

// PART E
struct transaction {
    char transactionType;
    int dateOFTransaction[3];
    float transactionAmount;
};

// PART F
struct time {
    int hours;
    int minutes;
    int seconds;
    char AMorPM[3];
};

// PART G
struct coordinates {
    int degrees;
    int minutes;
    char direction;
};

// PART H
struct game {
    int wins;
    int loses;
    int draws;
};

struct teams {
    char teamName[20];
    struct game home;
    struct game away;
};