#include "cs50.h"
#include <stdio.h>

int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);

int main(void)
{
    // Prompt the user for change owed, in cents
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    // Calculate how many quarters you should give customer
    int quarters = calculate_quarters(cents);
    
    // Subtract the value of those quarters from cents
    cents -= (quarters * 25);

    // Calculate how many dimes you should give customer
    int dimes = calculate_dimes(cents);

    // Subtract the value of those quarters from cents
    cents -= (dimes * 10);

    // Calculate how many nickels you should give customer
    int nickels = calculate_nickels(cents);

    // Subtract the value of those nickels from remaining cents
    cents -= (nickels * 5);

    // Calculate how many pennies you should give customer
    int pennies = cents;

    // Sum the number of quarters, dimes, nickels, and pennies used
    int sum = quarters + dimes + nickels + pennies;

    // Summary of change in details.
    printf("Summary of change - quarters: %i, dimes: %i, nickels: %i, pennies: %i\n\n", quarters, dimes, nickels, pennies);

    // Print out the sum
    printf("Total : %i\n", sum);
}

int calculate_quarters(int cents)
{
    // Calculate how many quarters you should give customer
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents -= 25;
    }
    return quarters;
}

int calculate_dimes(int cents) {
    int dimes= 0;
    while (cents >= 10)
    {
        dimes++;
        cents -= 10;
    }
    return dimes;
}

int calculate_nickels(int cents) {
    int nickels= 0;
    while (cents >= 5)
    {
        nickels++;
        cents -= 5;
    }
    return nickels;
}

