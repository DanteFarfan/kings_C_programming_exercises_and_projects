//Author: Dante Farfán
//Description: compares i and j, then returns if i is less than, equal to or greater than j

#include <stdio.h>

int main(void)
{
    int i = 0;
    int j = 0;

    printf("Enter two numbers (i j): ");
    scanf("%d %d", &i, &j);

    if (i == j)
    {
        printf("0");
    }
    else
    {
        printf("%c1", i < j? '-' : '+');
    }
}