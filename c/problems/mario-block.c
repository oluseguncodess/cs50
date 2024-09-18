#include "cs50.h"
#include <stdio.h>

void print_row(int n);
void print_spaces(int n);

int main(void) 
{
    // ask user for a number
    int number; 
    do 
    {
        number = get_int("Number: ");
    }
    while (number < 1);
    
    for (int i = 0; i < number; i++) {
        // print spaces
        print_spaces((number - 1) - i);
        
        // print rows
        print_row(i + 1);
        
    }
    
}

void print_spaces(int n) {
    // print out spaces 

    for (int i = 0; i < n; i++) {
        //print spaces

        printf(" ");
    }
}

void print_row(int n) {
    // print rows

    for (int i = 0; i < n; i++) {
        printf("#");
    }
    printf("\n");
}






