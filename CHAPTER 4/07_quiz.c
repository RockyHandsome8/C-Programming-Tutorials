#include <stdio.h>

int main()
{
    /*
    // Q1: Write a program to print first 'n' natural numbers using do-while loop.

    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);

    i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= num);

    return 0;
    */

    // Q2: Write a program to print first 'n' natural numbers using for loop

    int count;
    printf("Enter count: ");
    scanf("%d", &count);

    for (int i = 1; i <= count; i++)
    {
        printf("%d\n", i);
    }
}