#include "cs50.h"
#include <stdio.h>
#include <string.h>

int main (void) 
{
    string x = get_string("x: ");
    string y = get_string("y: ");

    if (strcmp(x, y) == 0) 
    {
        printf("Same\n");
    }
    else 
    {
        printf("Different\n");
    }
}