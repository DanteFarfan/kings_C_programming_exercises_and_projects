//Author: Dante Farfán
//Description: This program computes the volume of a sphere using the formula 4/3r^3

#include <stdio.h>

const float PI = 3.14159265358979323846;

int main(void)
{
    float radius = 0.0;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    float volume = 4.0f / 3.0f * PI *(radius * radius * radius);

    printf("The volume of the sphere is: %.2f\n", volume);
}