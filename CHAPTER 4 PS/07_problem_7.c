#include <stdio.h>
    
int main()
{
    // Repeat problem 6 using while loop.

    int fac, num;                 // Variable Declaration.
    fac = 1;                      // Variable Initialization.
    printf("Enter any Number: "); // Printing Message on Console Window.
    scanf("%d", &num);            // Input from User.

    while (num>0)
    {
        fac *= num;
        num--;
    }
    
    printf("Factorial of Given Number is: %d\n", fac);

    return 0;
}