#include <stdio.h>

#define SIZE 6
#define LENGTH 20
#define MAXLENGTH 100

typedef char STRING;

// structure templates
struct dateTime {
    int day; // DD
    int month; //MM
    float hourandMin; // HR.MIN
};

struct desc {
    int code;
    STRING description[LENGTH];

};

struct department {
    int lineCode;
    int batchCode;
    struct dateTime batchDateTime;
    int productID;
    struct desc issue;
    struct desc resolution;
    int employeeID;
};

// function assignments
void displayIssueReport(int[][MAXLENGTH][MAXLENGTH]);
void displaySortedDepartment(struct department *);
void mergeSort(struct department *, int, int);
void merge(struct department *, int, int, int);

int main() {
    int i, size;
    int issueReport[MAXLENGTH][MAXLENGTH][MAXLENGTH];
    struct department employees[SIZE] = {
        {2, 796, {4, 12, 15.05}, 23, {202, "Issue Desc..."}, {23, "Resolution Desc..."}, 101},
        {4, 648, {6, 2, 20.55}, 39, {308, "Issue Desc..."}, {69, "Resolution Desc..."}, 102},
        {6, 408, {28, 4, 16.45}, 18, {724, "Issue Desc..."}, {23, "Resolution Desc..."}, 103},
        {8, 384, {23, 11, 9.38}, 50, {592, "Issue Desc..."}, {18, "Resolution Desc..."}, 104},
        {3, 497, {13, 9, 18.27}, 84, {365, "Issue Desc..."}, {38, "Resolution Desc..."}, 105},
        {5, 297, {2, 3, 11.15}, 59, {104, "Issue Desc..."}, {49, "Resolution Desc..."}, 106}
    };

    for (i = 0; i < SIZE; i++) {
        issueReport[employees[i].productID][employees[i].lineCode][employees[i].issue.code]++;

    } // end for

    
    size = sizeof(employees) / sizeof(employees[0]);
    mergeSort(employees, 0, size - 1);

    printf("--------Data--------\n\n");
    displaySortedDepartment(employees);

    printf("\n\n------Issue Report------");
    displayIssueReport(issueReport);

    return 0;

} // end main

// TASK 1
// uses the merge sort algorithm to sort each variable O(NLog(N))
void mergeSort(struct department emp[], int low, int high) {
    int mid;


    if (low < high) {
        mid = (low + high) / 2;
        mergeSort(emp, low, mid);
        mergeSort(emp, mid + 1, high);
        merge(emp, low, mid, high);
    } // end if

} // end mergeSort

void merge(struct department emp[], int low, int mid, int high) {
    int temp[high - low + 1];
    int i, j, k = low;
    int ptrL = mid - low + 1, ptrR = high - mid;

    // creates temporary arrays
    struct department LEFT[LENGTH], RIGHT[LENGTH];

    // copying data into the temp arrays
    for (i = 0; i < ptrL; i++) {
        LEFT[i] = emp[low + i];

    } // end for

    for (j = 0; j < ptrR; j++) {
        RIGHT[j] = emp[mid + 1 + j];

    } // end for


    i = 0, j = 0;
    // merges the temp arrays back to emp
    while (i < ptrL && j < ptrR) {
        // compares the values by date and time
        if (LEFT[i].batchDateTime.month < RIGHT[j].batchDateTime.month || 
        LEFT[i].batchDateTime.month == RIGHT[i].batchDateTime.month && LEFT[i].batchDateTime.day < RIGHT[i].batchDateTime.day ||
        LEFT[i].batchDateTime.month == RIGHT[i].batchDateTime.month && LEFT[i].batchDateTime.day == RIGHT[i].batchDateTime.day && 
        LEFT[i].batchDateTime.hourandMin < RIGHT[i].batchDateTime.hourandMin) {
            emp[k++] = LEFT[i++];

        } else {
            emp[k++] = RIGHT[j++];

        } // end if

    } // end while

    // copies the rest of the values into emp if there is any
    while (i < ptrL) {
        emp[k++] = LEFT[i++];

    } // end while

    while (j < ptrR) {
        emp[k++] = RIGHT[j++];

    } // end while

} // end merge

// displays the sorted departments in order of date and time
void displaySortedDepartment(struct department emp[]) {
    int i;


    // reports each line log in productID, issueCode, an dateandTime
    for (i = 0; i < SIZE; i++) {
        printf("---Department---\n");
        printf("Product ID: %d\n", emp[i].productID);
        printf("Issue Code: %d\n", emp[i].issue.code);
        printf("Date: %d/%d/2024, Time: %.2f\n\n", emp[i].batchDateTime.day, emp[i].batchDateTime.month, emp[i].batchDateTime.hourandMin);
    } // end for

} // end displaySortedDepartment

// TASK 2
// displays the departments one by one
void displayIssueReport(int issueReport[][MAXLENGTH][MAXLENGTH]) {
    int i, j, k;
    for (i = 0; i < MAXLENGTH; i++) {
        for (j = 0; j < MAXLENGTH; j++) {
            for (k = 0; k < MAXLENGTH; k++) {
                if (issueReport[i][j][k] > 0) {
                    printf("Product ID: %d\n", i);
                    printf("Line Code: %d\n", j);
                    printf("Issue Code: %d\n", k);
                    printf("Count: %d\n", issueReport[i][j][k]);
                }
            }
        }
    }
} // end displayIssueReport
