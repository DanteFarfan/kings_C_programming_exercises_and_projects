//Author: Dante Farfán
//Description: Calculates the remaining balance of a loan

#include<stdio.h>

int main(void)
{
    float loan = 0.0f;
    float interest_rate = 0.0f;
    float payment = 0.0f;
    int months = 0;

    printf("Enter amount of laon: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    printf("Enter time in months: ");
    scanf("%d", &months);

    interest_rate = (interest_rate/100)/12;

    for (int i = 1; i <= months; i++)
    {
        loan = (loan - payment) + (loan * interest_rate);
        printf("the balance for the %dth month is: %.2f\n", i, loan);
    }
}
