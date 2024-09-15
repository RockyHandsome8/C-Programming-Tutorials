#include <stdio.h>
int main()
{
    // WAP to calculate the factorial of a given number using for loop.

    int fac, num;                 // Variable Declaration.
    fac = 1;                      // Variable Initialization.
    printf("Enter any Number: "); // Printing Message on Console Window.
    scanf("%d", &num);            // Input from User.

    for (int i = num; i > 0; i--)
    {
        fac *= i;
    }

    printf("Factorial of Given Number is: %d", fac);

    return 0;
}