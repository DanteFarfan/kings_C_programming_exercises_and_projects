//Author: Dante Farfán
//Description: modification of the add fractions code

#include<stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter fraction adition: ");
    scanf("%d / %d + %d / %d", &num1, &denom1, &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;

    printf("The sum is: %d/%d\n", result_num, result_denom);
}

