//Author: Dante Farfán
//Description: Computes UPC check digit

#include <stdio.h>
#define UPC_DIGITS 11

int main(void)
{
    int digits[UPC_DIGITS];

    printf("Enter the first 12 digits of the UPC code: ");

    for (int i = 0; i < UPC_DIGITS; i++)
    {
        scanf("%1d", &digits[i]);
    }

    int first_sum = 0;

    for (int i = 0; i < UPC_DIGITS; i += 2)
    {
        first_sum += digits[i];
    }

    int second_sum = 0;

    for (int i = 1; i < UPC_DIGITS - 1; i += 2)
    {
        second_sum += digits[i];
    }

    int total = 3 * first_sum + second_sum;

    printf("The check digit is: %d", 9 - ((total - 1) % 10));
}