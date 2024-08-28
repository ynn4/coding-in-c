#include <cs50.h>
#include <stdio.h>

int c_quarters();
int c_dimes();
int c_nickels();
int c_pennies();

int main()
{
    int cents;
    do
    {
        cents = get_int("Change owed in cents: ");
    }
    while (cents < 0);

    int quarters = c_quarters(cents);
    cents = cents - (quarters * 25);
    int dimes = c_dimes(cents);
    cents = cents - (dimes * 10);
    int nickels = c_nickels(cents);
    cents = cents - (nickels * 5);
    int pennies = c_pennies(cents);
    cents = cents - (pennies * 1);

    printf("%i\n", quarters + dimes + nickels + pennies);
}

int c_quarters(int cents)
{
    int quarters = 0;
    while (cents >= 25)
    {
        cents = cents - 25;
        quarters++;
    }
    return quarters;
}
int c_dimes(int cents)
{
    int dimes = 0;
    while (cents >= 10)
    {
        cents = cents - 10;
        dimes++;
    }
    return dimes;
}
int c_nickels(int cents)
{
    int nickels = 0;
    while (cents >= 5)
    {

        cents = cents - 5;
        nickels++;
    }
    return nickels;
}

int c_pennies(int cents)
{
    int pennies = 0;
    while (cents >= 1)
    {

        cents = cents - 1;
        pennies++;
    }
    return pennies;
}
