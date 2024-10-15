#include <stdio.h>

int main()
{
    // WAP to check if the number entered by the user is a prime or not.

    int n;
    int count = 0;

    printf("Enter a number ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("This is an invalid number\n");
    }

    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        if (count <= 2)
        {
            printf("%d is a prime number", n);
        }
        else
        {
            printf("%d is not a prime number", n);
        }
    }

    return 0;
}