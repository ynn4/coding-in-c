#include <cs50.h>
#include <stdio.h>

int rectarea();
int main()
{
    int length = get_int("type the length: ");
    int width = get_int("type the width: ");
    printf("%d\n", rectarea(length, width));
}

int rectarea(int l, int w)
{
    return l * w;
}
