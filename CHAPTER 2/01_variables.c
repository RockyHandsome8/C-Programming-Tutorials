// In C, variable are basically just memory location inside the system

#include <stdio.h>

int main()
{
    int i = 10;
    int j = i;
    int a = 2, b = 3, c = 4, d = 5;
    // Here, %d is the format specifier
    // %d is for int, %f is for float and %c is for char
    printf("The value of i is %d and j is %d\n", i, j);
    printf("The value of a is %d and b is %d\n", a, b);
    printf("The value of c is %d and d is %d\n", c, d);
    return 0;
}