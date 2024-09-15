// Write a program to calculate area of a rectangle:
//  a. Using hard coded inputs (constants).
//  b. Using inputs supplied by the user.
#include <stdio.h>

int main()
{
    // int l = 2;
    // int b = 3;
    // int area = l * b;
    // printf("area of rectangle is %i", area);
    // return (0);

    int l, b;
    printf("enter length:\n");
    scanf("%i", &l);
    
    printf("enter breadth:\n");
    scanf("%i", &b);
    
    printf("The area of the rectangle is %i", l * b);
    
    return 0;
}
