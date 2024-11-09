#include <stdio.h>
#include <stdlib.h>

int main (void) 
{
    // allocate memory for an array of 3 integers
   int *list = malloc(3 * sizeof(int));

   // check if memory allocation is successful
   if (list == NULL) 
   {
        return 1;
   }

    // assign values to the array
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // Time passes and i want to add more intergers

    // create a new temporary array and allocate memory for 4 integers
    int *temp = realloc(list, 4 * sizeof(int));

    // check if memory allocation was successful
    if (temp == NULL)
    {
        free(list);
        return 1; // exit program as allocation failed
    }

    // add the last value in the new array
    temp[3] = 4;

    // rename temp to list
    list = temp;

    // print out the values 
    for (int i = 0; i < 4; i++ )
    {
        printf("%i\n", list[i]);
    }

    //free memory again to avoid memory leaks
    free(list);
    return 0;
}