//Author: Dante Farfán
//Description: This program ask for a monetary amount, then returns the total with tax included

#include<stdio.h>

int main(void)
{
    float amount = 0.0f;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    printf("The total with tax is: %.2f", amount += amount * 0.05);
}