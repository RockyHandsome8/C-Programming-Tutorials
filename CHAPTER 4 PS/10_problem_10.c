#include <stdio.h>

int main()
{
    // Implement problem 9 using other types of loops.

    /*

    Using DO-WHILE LOOP

    int num, isPrime = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int i = 2;

    do
    {
        if (num % i == 0)
        {
            isPrime = 1;
        }
        i++;
    } while (i < num);

    if (isPrime) // Is true if isPrime == any non-zero integer.
    {
        printf("%d is not a prime number.", num);
    }
    else
    {
        printf("%d is a prime number.", num);
    }
    */





    // Using FOR LOOP
    int num, isPrime = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isPrime = 1;
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