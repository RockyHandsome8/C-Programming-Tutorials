#include <stdio.h>

int sumN(int n)
{
    if (n <= 0)
    {
        printf("This is not a natural number \n");
    }
    else if (n == 1)
    {
        return 1;
    }

    return sumN(n - 1) + n;
}

int main()
{
    int n = 5;
    // write a function to calculate the sum of first 'n' natural numbers.
    printf("The sum of first %d natural numbers is: %d", n, sumN(n));
    return 0;
}