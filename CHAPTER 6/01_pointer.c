#include <stdio.h>
    
int main()
{
    // Pointer is a variable that stores the address of another variable.
    int i = 72;
    printf("The address of i is %p\n", &i); // & - address of...

    int* j = &i; // j is an integer pointer pointing to i
    printf("The address of i is %p\n", j); // gives the same output as above.

    printf("The value at address j is %d\n", *j); // * - dereference...
    return 0;
}