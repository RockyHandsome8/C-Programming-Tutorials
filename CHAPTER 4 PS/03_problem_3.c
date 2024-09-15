#include <stdio.h>

int main()
{
    // Write a program to sum first ten natural numbers using while loop.

    int i = 1, sum;
    while (i <= 10)
    {
        sum += i;
        i++;
    }

    printf("%d", sum);

    return 0;
}