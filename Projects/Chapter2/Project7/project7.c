//Author: Dante Farfán
//Description: Ask for a monetary amount, returns minimum bill to pay

#include<stdio.h>

int main(void)
{
    int money_to_pay = 0;

    printf("Enter an amount: ");
    scanf("%d", &money_to_pay);

    printf("$20 bills: %d\n", money_to_pay / 20);

    money_to_pay = money_to_pay % 20;

    printf("$10 bills: %d\n", money_to_pay / 10);

    money_to_pay = money_to_pay % 10;

    printf("$5 bills: %d\n", money_to_pay / 5);

    money_to_pay = money_to_pay % 5;

    printf("$1 bills: %d\n", money_to_pay);
}