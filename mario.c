#include <cs50.h>
#include <stdio.h>

void print_row();
int main(void)
{
    // Prompt the user for the pyramid's height
    int height;
    do
    {
        height = get_int("Type the height: ");
    }
    while (height > 8 || height < 1);

    // Print a pyramid of that height
    for (int i = 0; i < height; i++)
    {
        print_row(height, i);
    }
}

void print_row(int height, int i)
{
    // Print spaces
    for (int spaces = 0; spaces < height - i - 1; spaces++)
    {
        printf(" ");
    }

    // Print row of bricks

    for (int bricks = 0; bricks <= i; bricks++)
    {
        printf("#");
    }

    // Print more spaces
    printf("  ");

    // Print row of bricks
    for (int bricks = 0; bricks <= i; bricks++)

    {
        printf("#");
    }
    
    printf("\n");
}
