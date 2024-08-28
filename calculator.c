#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: ");
    int y = get_int("y: ");
    bool valid;
    do
    {
        valid = true;
        char o = get_char("choose your operation: ");

        if (o == '+')
        {
            printf("%i\n", x + y);
        }
        else if (o == '-')
        {
            printf("%i\n", x - y);
        }
        else if (o == '/')
        {
            printf("%i\n", x / y);
        }
        else if (o == '*')
        {
            printf("%i\n", x * y);
        }
        else
            valid = false;
    }
    while (!valid);
}
