//Author: Dante Farfán
//Description: Converts phone number format

#include<stdio.h>
#define SIZE 16
#define ROW_SIZE 4

int main(void)
{
    int number[SIZE];
    printf("Enter the numbers from 1 to 16 in any order: ");

    for (int i = 0; i < SIZE; i++)
    {
        scanf(" %d", &number[i]);
    }

    int list_position = 0;

    for (int i = 0; i < SIZE/ROW_SIZE; i++)
    {
        for (int j = 0; j < ROW_SIZE; j++)
        {
            printf("%2d\t", number[list_position]);
            list_position++;
        }
        printf("\n");
    }

    list_position = 0;
    int row_sum = 0;
    int diagonal2_sum = 0;

    printf("Row sums: ");

    for (int i = 0; i < SIZE/ROW_SIZE; i++)
    {
        for (int j = 0; j < ROW_SIZE; j++)
        {
            row_sum += number[list_position];
            list_position++;
        }
        printf("%d ", row_sum);
        row_sum = 0;
    }
    printf("\n");

    list_position = 0;
    int column_sum = 0;

    printf("Column sums: ");

    for (int i = 0; i < SIZE/ROW_SIZE; i++)
    {
        for (int j = 0; j < ROW_SIZE; j++)
        {
            column_sum += number[list_position];
            list_position += ROW_SIZE;
        }
        list_position -= list_position - 1;

        printf("%d ", column_sum);
        column_sum = 0;
    }
    printf("\n");

    list_position = 0;
    int diagonal1_sum = 0;

    printf("Diagonal sums: ");

    for (int i = 0; i < ROW_SIZE; i++)
    {
        diagonal1_sum += number[list_position];
        list_position += ROW_SIZE + 1;
    }

    list_position += ROW_SIZE;

    for (int i = 0; i < ROW_SIZE - 1; i++)
    {
        diagonal2_sum += number[list_position];
        list_position += ROW_SIZE - 1;
    }

    printf("%d %d\n", diagonal1_sum, diagonal2_sum);
}