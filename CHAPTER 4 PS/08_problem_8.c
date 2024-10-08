#include <stdio.h>

int main()
{
    int num, isPrime = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0 && num != 2)
        {
            isPrime = 1; // True
            break;
        }
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
