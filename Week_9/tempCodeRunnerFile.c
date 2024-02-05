// PART D OF THE QUESTION
    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            average += arr[i][j];
        }
    }

    average = average/(ROW*COL);
    printf("\n\nThe average of the entered values is %d", average);
