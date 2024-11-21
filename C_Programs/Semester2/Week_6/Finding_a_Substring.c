#include <stdio.h>
#include <string.h>

#define SIZE 100

int main()
{
    char sentence[SIZE];
    char *found;
    int counter = 0;
    

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove newline character if present
    sentence[strlen(sentence) - 1] = '\0';


    // if the sentence begins with "is"
    if (strncmp(sentence, "is ", 3) == 0)
    {
        // increment counter
        counter++;
        
    } // end if

/*
    if (!strcmp(strrchr(sentence, '\0') - 3, " is"))
    {
        // increment counter
        counter++;
    }
*/

    found = strstr(sentence, "is");
    
    // at least one occurance of the word "is" occurs
    while ((found = strstr(found, " is ")) && found != NULL) {

        // increment counter
        counter++;

        // move pointer to point at the next character following the occurance of " is " in the sentence
        found ++;
            
    }
        
    printf("\nOccurences: %d\n", counter);

    return 0;

    
}