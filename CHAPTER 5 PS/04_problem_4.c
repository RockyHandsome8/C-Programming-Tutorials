#include <stdio.h>

int fibonacci(int); // function declaration

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n = 7;
    // Print fibonacci series of n'th element
    printf("The value of the fibonacci series at %d is %d\n", n, fibonacci(n));

    return 0;
}
