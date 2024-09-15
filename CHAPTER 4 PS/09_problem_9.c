#include <stdio.h>

int main()
{
    int num, isPrime = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int i = 2;

    while (i < num)
    {
        if (num % i == 0)
        {
            isPrime = 1;
        }
        i++;
    }

    if (isPrime) // Is true if isPrime == any non-zero integer.
    {
        printf("%d is not a prime number.", num);
    }
    else
    {
        printf("%d is a prime number.", num);
    }

    return 0;
}