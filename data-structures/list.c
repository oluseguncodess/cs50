#include <stdio.h>

int main (void) 
{
    //create an array to take only 3 values
    int list[3];

    // assign values to the array
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // create a loop to print out each value in the array
    for (int i = 0; i < 3; i++) 
    {
        printf("%i\n", list[i]);
    }
}