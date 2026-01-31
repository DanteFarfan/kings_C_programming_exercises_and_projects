//Author: Dante Farfán
//Description: Decimal to octal convertor

#include <stdio.h>
#define OCTAL_DIGITS 5

int main(void)
{
    int decimal_number = 0;
    int octal_number[OCTAL_DIGITS];

    printf("Enter a number from 0 to 32767: ");
    scanf("%d", &decimal_number);

    printf("In octal, your number is: ");

    for (int i = OCTAL_DIGITS - 1; i >= 0; i--)
    {
        octal_number[i] = decimal_number % 8;
        decimal_number /= 8;
    }
    for (int i = 0; i < OCTAL_DIGITS; i++)
    {
        printf("%d", octal_number[i]);
    }
}