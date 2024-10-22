#include <stdio.h>

// // Recursive function to calculate Fibonacci series
// int fibonacci(int n)
// {
//     if (n <= 1)
//         return n;
//     else
//         return fibonacci(n - 1) + fibonacci(n - 2);
// }

// // Function to print the Fibonacci series up to the nth number
// void print_fibonacci_series(int num)
// {
//     for (int i = 0; i < num; i++)
//     {
//         printf("%d ", fibonacci(i));
//     }
// }

void main()
{
    // fibonacci series
    // 1. using recursive functions
    // 2. using loops (all of them)

    // Sum of the digits of a 4 digit number
    // Check if a number is prime or not.

    // int n;

    // // Input the number of terms for the Fibonacci series
    // printf("Enter the number of terms: ");
    // scanf("%d", &n);

    // if (n <= 0)
    // {
    //     printf("Please enter a positive integer.\n");
    // }
    // else
    // {
    //     printf("Fibonacci Series:\n");
    //     print_fibonacci_series(n);
    // }

    int t1 = 0, t2 = 1, nextTerm, num, i = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    // for (int i = 1; i <= num; i++) {
    //     printf("%d ", t1);
    //     nextTerm = t1 + t2;  // Calculate the next term
    //     t1 = t2;             // Update t1 to the next term
    //     t2 = nextTerm;       // Update t2 to the next term
    // }

    do
    {
        printf("%d ", t1);
        nextTerm = t1 + t2; // Calculate the next term
        t1 = t2;            // Update t1 to the next term
        t2 = nextTerm;      // Update t2 to the next term

        i++;
    } while (i <= num);
}