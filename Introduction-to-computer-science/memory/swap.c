#include "cs50.h"
#include <stdio.h>

void swap(int *a, int *b);

int main (void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    printf("x is %i and y is %i\n", x, y);

    swap(&x, &y);

    printf("x is %i and y is %i\n", x, y);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

