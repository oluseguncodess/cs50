#include <stdio.h>

void print_row(int n);

int main (void) 
{
    print_row(3);
}

void print_row(int n) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("#");
    }
    printf("\n");
}