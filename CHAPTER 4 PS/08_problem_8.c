#include <stdio.h>

int main()
{
    int num, isPrime = 1; // `isPrime` initialized to 1 (true).
    printf("Enter any Number: ");
    scanf("%d", &num);

    // Handle edge cases for numbers less than or equal to 1.
    if (num <= 1)
    {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Loop from 2 to sqrt(num) to check for factors.
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            isPrime = 0; // Set `isPrime` to 0 (false) if `num` is divisible by `i`.
            break;       // Exit the loop if a divisor is found.
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
