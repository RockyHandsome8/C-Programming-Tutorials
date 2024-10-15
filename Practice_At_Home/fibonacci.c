#include <stdio.h>

// int fibonacci(int n){
//     if (n == 0) return 0; // base case 1: n = 0. Return value is 0.
//     else if (n == 1) return 1; // base case 2: n = 1. Return value is 1.

//     return fibonacci(n-1) + fibonacci(n-2);
// }

int main()
{
    // In a Fibonacci series, every term is the sum of the previous two terms.
    // For ex: 0, 1, 1, 2, 3, 5...

    // fib(n) = fib(n-1) + fib(n-2)

    int a, b, n, sum;
    a = 0; b = 1;

    printf("Enter a number ");
    scanf("%d", &n);

    printf("Fib(%d) =", n);
    for (int i = 0; i <= n; i++)
    {
        printf(" %d,", a);
        sum = a + b;
        a = b;
        b = sum;
    }




    // int n = 3;
    // printf("Fib(%d) = %d", n, fibonacci(n));

    return 0;
}