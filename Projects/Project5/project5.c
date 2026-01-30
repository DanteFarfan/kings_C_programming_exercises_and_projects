//Author: Dante Farfán
//Description: Ask for X value then evaluates a polynomial

#include<stdio.h>

int main(void)
{
    float x = 0.0f;

    printf("Enter a value for x: ");
    scanf("%f", &x);

    float result = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) - x * x + 7 * x - 6;

    printf("The result is: %.2f\n", result);
}