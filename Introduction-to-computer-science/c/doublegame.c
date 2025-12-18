#include "cs50.h"
#include <stdio.h>


int main(void) 
{
    // You have your dollars
    int dollars = 1;
    int oneMillionDollars = 1000000;
    for(dollars = 1; dollars < oneMillionDollars; dollars *= 2) 
    {
        char c = get_char("Here's $%i. Press 'y' to double it and give it to the next person. Press 'n' to collect your money: ", dollars);

        if (c == 'y' || c == 'Y') 
        {
            continue;
        } 
        else if (c == 'n' || c == 'N') 
        {
            printf("Thank you for playing, you have received $ %i dollars", dollars);
            break;
        } 
        else
        {
            printf("Incorrect input! Input either 'y' or 'n' please\n");
        }
    }
    
    printf("You have exceeded the amount this game can afford. Congrats on winning a million dollars ($%i)", oneMillionDollars);
}

