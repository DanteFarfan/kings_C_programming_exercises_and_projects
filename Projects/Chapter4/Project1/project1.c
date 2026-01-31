//Author: Dante Farfán
//Description: Asks for a two-digit number, then flips the digits

#include<stdio.h>

int main(void)
{
    int number = 0;

    printf("Enter a two-digit numer: ");
    scanf("%d", &number);

    printf("The digits are: %1d%1d\n", number % 10, number / 10);
}