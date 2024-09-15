#include <stdio.h>

int main()
{
    /*
    Write a program to print natural numbers from 10 to 20 when
    initial loop counter is initialized to 0
    */
    int i = 0;

    while (i <= 10)
    {
        printf("%d\n", i++ + 10);
    }
    return 0;
}