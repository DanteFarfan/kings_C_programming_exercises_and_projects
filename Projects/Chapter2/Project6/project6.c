//Author: Dante Farfán
//Description: Modification for project 5, changing the polynimial

#include<stdio.h>

int main(void)
{
    float x = 0.0f;

    printf("Enter a value for x: ");
    scanf("%f", &x);

    float result = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("The result is: %.2f\n", result);
}