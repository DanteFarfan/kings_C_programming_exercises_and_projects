//Author: Dante Farfán
//Description: Converts phone number format

#include<stdio.h>

int main(void)
{
    int prefix, first_row, second_row;

    printf("Enter a phone number[(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d",&prefix, &first_row, &second_row);

    printf("You entered: %03d.%03d.%04d", prefix, first_row, second_row);
}