/*
This program implements a credit card validation algorithm and determines the card type (Visa,
MasterCard, Amex). By @ynn4
*/

#include <cs50.h>
#include <stdio.h>

int main()
{
    // Prompt for input
    long number = get_long("Number: ");
    long original = number;

    // Check for card length
    int i = 0;
    while (number > 0)
    {
        number = number / 10;
        i++;
    }

    if (i == 13 || i == 15 || i == 16)
    {
        // Calculate checksum
        int j = 0;
        int sum = 0;
        int oddsum = 0;
        int total = 0;
        int firstDigit, secondDigit;

        while (original > 0)
        {
            int digit = original % 10;
            secondDigit = firstDigit;
            firstDigit = digit;
            j++;
            // Starting with the original number’s second-to-last digit
            if (j % 2 == 0)
            {
                // Multiply every digit by 2
                digit = digit * 2;
                // Add digits together
                if (digit > 9)
                {
                    while (digit > 0)
                    {
                        sum += digit % 10;
                        digit = digit / 10;
                    }
                }
                else
                {
                    sum += digit % 10;
                }
            }
            else
            {
                // Add other digits to the sum
                oddsum += digit;
            }

            original = original / 10;
        }
        total = oddsum + sum;
        if (total % 10 == 0)
        { // Checking the card type
            if (j == 15 && firstDigit == 3 && (secondDigit == 4 || secondDigit == 7))
            {
                printf("AMEX\n");
            }
            else if ((j == 13 || j == 16) && firstDigit == 4)
            {
                printf("VISA\n");
            }

            else if (j == 16 && firstDigit == 5 &&
                     (secondDigit == 1 || secondDigit == 2 || secondDigit == 3 ||
                      secondDigit == 4 || secondDigit == 5))
            {
                printf("MASTERCARD\n");
            }
            else
            {
                printf("INVALID\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }

    else
    {
        printf("INVALID\n");
    }
}
