#include <stdio.h>

int main()
{
    int age = 15;

    if (age > 5)
    {
        printf("We are inside if\n");
        printf("Your age is greater than 10\n");
    }

    if (age % 5 == 0)
    {
        printf("We are inside another if\n");
        printf("Your age is greater is divisible by 10");
    }
    return 0;
}