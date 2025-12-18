#include "cs50.h"
#include <stdio.h>

// prototype
void rows (int n);

int main (void) 
{
    // get user input
    int n = get_int("Height: ");

    for(int i = 0; i < n; i++) {
        rows(i + 1);
    }
}

void rows (int n) {
    for (int i = 0; i < n; i++) 
    {
        printf("#");
    }
    printf("\n");
}