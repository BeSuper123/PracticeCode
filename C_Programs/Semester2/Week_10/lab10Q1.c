/*
Programs Description: This program demonstrates
    (a) using file IO to read in two files
    (b) comparing the files characters
    (C) displaying any differences that occur

Author: Blessing Ugochukwu

Date: 18/04/24
*/
#include <stdio.h>

#define SIZE 21

int main() {
    // creates a file pointer to point to a file
    FILE *fp1, *fp2;

    char difference1[SIZE];
    char difference2[SIZE];
    int i = 0;
    

    // opens the file called test.txt for reading
    fp1 = fopen("file.txt", "r");
    fp2 = fopen("file2.txt", "r");

    // checks if the files were opened succesfully
    if (fp1 == NULL && fp2 == NULL) {
        printf("Error opening file");
    } else {
        printf("Files opened successfully\n");

        // checks for any differences and printts any that show up
        while (fgets(difference1, SIZE, fp1) != EOF) {
            if (difference1[i] == difference2[i] || char1 != '\n') {
                difference1[i] = char1;
                i++;

            } // end if

        } // end while

        // checks for any differences and printts any that show up
        i = 0;
        while (fgets(difference2, SIZE, fp2) != EOF) {
            if (char2 != char1 || char2 == '\n') {
                difference2[i] = char2;
                i++;

            } // end if

        } // end while

        printf("\n%s", difference1);
        printf("\n%s", difference2);
        
        fclose(fp1);
        fclose(fp2);

    } // end if 

    return 0;

} // end main