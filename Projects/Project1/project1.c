//Author: Dante Farfám
//Description: This creates a check like form using ascii characters, works for number from 3 to 22

#include <stdio.h>

int const height = 22;

int main(void)
{
    int space_number_middle = height + height / 3;
    switch (height)
    {
        case 3:
            space_number_middle -= 1;
            break;
        case 4:
            space_number_middle -= 1;
            break;
        case 6:
            space_number_middle -= 1;
        case 11:
            space_number_middle += 1;
        default:
            if (height > 12)
            {
                space_number_middle += 2;
            }
            break;
    }

    int space_number_left = 0;
    for (int i = 0; i < height; i++)
    {
        if (i < height / 2)
        {
            for (int j = 0; j < space_number_middle * 2; j++)
            {
                printf(" ");
            }
            printf("*\n\n");
            space_number_middle--;
        }
        else
        {
            if (i < height - 1)
            {
                for (int j = 0; j < space_number_left * 2; j++)
                {
                    printf(" ");
                }
                printf("*");
                for (int j = 1; j < (space_number_middle - space_number_left) * 2; j++)
                {
                    printf(" ");
                }
                printf("*\n\n");
                space_number_middle--;
                space_number_left++;
            }
            else
            {
                for (int j = 0; j < space_number_left * 2; j++)
                {
                    printf(" ");
                }
                printf("*");
            }
        }
    }
    return 0;
}