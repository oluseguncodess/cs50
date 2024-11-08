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

    // print out values 
    for (int i = 0; i < 3; i++) 
    {
        printf("%i\n", list[i]);
    }

    // free memory to avoid memory leaks 
    free(list);
}