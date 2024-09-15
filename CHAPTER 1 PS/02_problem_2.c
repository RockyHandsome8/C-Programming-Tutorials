// Calculate the area of a circle and modify the same program to calculate the
// volume of a cylinder given its radius and height.

#include <stdio.h>

int main()
{
    int rad;
    int height;
    printf("enter radius:\n");
    scanf("%i", &rad);
    printf("enter height:\n");
    scanf("%i", &height);
    printf("The volume of cylinder with radius %i and height %i is %f", rad, height, 3.14 * rad * rad * height);
    return 0;
}