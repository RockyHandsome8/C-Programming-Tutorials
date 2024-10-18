#include <stdio.h>

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    // return fib(n - 1) + fib(n - 2);
    return fib(n - 1);
}

void main()
{
    // fibonacci series
    // 1. using recursive functions
    // 2. using loops (all of them)

    // Sum of the digits of a 4 digit number
    // Check if a number is prime or not.

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d", fib(num));
}