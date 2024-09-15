#include <stdio.h>

int main()
{
    // WAP to implement program 3 using "for" and "do-while" loop.
    // 1. using for loop
    // int i, sum;
    // // i = 1;
    // sum = 0;

    // for (int i = 1; i <= 10; i++)
    // {
    //     sum += i;
    // }

    // printf("Sum of first 10 natural numbers is: %d", sum);





    // 2. using do-while loop
    int i = 1, sum;

    do
    {
        sum += i;
        i++;
    } while (i <= 10);

    printf("%d", sum);

    return 0;
}