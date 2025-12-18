#include "cs50.h"
#include <stdio.h>
#include <string.h>

typedef struct 
{
    string name;
    string number;
} person;


int main (void) {
    person people[1];

    people[0].name = "Olusegun";
    people[0].number = "09025768559";

    people[1].name = "Anna";
    people[1].number = "89047553561";
}

