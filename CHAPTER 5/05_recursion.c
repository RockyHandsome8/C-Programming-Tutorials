#include <stdio.h>

int factorial(int n) // function prototype
{
    /*
    fac(5) = 1 x 2 x 3 x 4 x 5
    fac(4) = 1 x 2 x 3 x 4
    fac(3) = 1 x 2 x 3
    
    fac(n) = 1 x 2 x 3 x ... x n-1 x n
    fac(n-1) = 1 x 2 x 3 x ... x n-1
    so,
    fac(n) = fac(n - 1) x n
    */
    if (n == 1 || n == 0) // base condition
    { 
        return 1;
    }

    return factorial(n - 1) * n;
}

int main()
{
    int n = 3;
    printf("The factorial of %d is %d", n, factorial(n));
    return 0;
}