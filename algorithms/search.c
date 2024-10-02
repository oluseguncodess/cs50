#include "cs50.h"
#include <stdio.h>
#include <string.h>


int main (void) {
    // save the names and respective numbers.
    string names[] = {"Olusegun", "random1", "random2"};
    string numbers[] = {"09025768559", "84733787438", "8467637647"};

    //get user's search
    string input = get_string("Name: ");

    for(int i = 0; i < 3; i++) {
        if(strcmp(names[i], input) == 0) {
            printf("Found %s\n", numbers[i]);
            return 0;
        }

        printf("Not Found");
        return 1;
    }
}

