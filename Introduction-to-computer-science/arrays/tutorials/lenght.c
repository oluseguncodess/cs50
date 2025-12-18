#include "cs50.h"
#include <stdio.h>


// Since we know that a string is a array, we can get the length of it by creating a function for it

// prototype
int string_length(string word);

int main(void) {
    printf("Your name has %i letters", length("Olusegun"));
}

int string_length(string s) {
    int n = 0;
    while (s[n] != '\0') {
        n++;
    }
    return n;
}


