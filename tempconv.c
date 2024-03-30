#include<stdio.h>

int main()
{
    char scale;
    float tmp_f, tmp_c;
    printf("Choose the temperature scale you have:\nF for Fahrenheit ; C for Celsius: ");
    scanf("%c", &scale);
    getchar();

    if( scale == 'F' || scale == 'f') {
        printf("Enter the temperature value: ");
        scanf("%f", &tmp_f);
        float i = (tmp_f-32) * 5/9;
        printf("The temperature in Celsius is: %.2f\n", i);
    }
    else if ( scale == 'C' || scale == 'c') {
        printf("Enter the temperature value: ");
        scanf("%f", &tmp_c);
        float j = tmp_c * 9/5 + 32;
        printf("The temperature in Fahrenheit is: %.2f\n", j);
    }
    else {
        printf("Invalid input. Please choose either F or C.\n");
        return 1;
    }
    return 0;
}
