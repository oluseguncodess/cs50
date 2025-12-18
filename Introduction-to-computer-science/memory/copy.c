#include "cs50.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void) 
{
    // we first need to get the string
    char *s = get_string("s: ");

    // we are allocating new memory to *t from *s
    char *t = malloc(strlen(s) + 1);

    // we need to copy string s to t by using a for loop
    for (int i = 0, n=strlen(s); i <= n; i++ ) 
    {
        t[i] = s[i];
    }

    // make the first char uppercase
    t[0] = toupper(t[0]);

    // print out the string of s and t and see the results
    printf("%s\n", s);
    printf("%s\n", t);

    // free memory
    free(t);
}