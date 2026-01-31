//Author: Dante Farfán
//Description: Asks for a three-digit number, then flips the digits

#include<stdio.h>
#define DIGIT_AMOUNT 3

int main(void)
{
    int digits[DIGIT_AMOUNT];

    printf("Enter a %d digit number: ", DIGIT_AMOUNT);

    for (int i = 0; i < DIGIT_AMOUNT; i++)
    {
        scanf("%1d", &digits[i]);
    }

    printf("The reversal is: ");

    for (int i = DIGIT_AMOUNT - 1; i >= 0; i--)
    {
        printf("%d", digits[i]);
    }
}