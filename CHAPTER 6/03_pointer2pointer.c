#include <stdio.h>
    
int main()
{
    // Pointer is a variable that stores the address of another variable.
    int i = 6;
    int *j = &i;
    int **k = &j; // k is pointer to pointer to int.

    printf("The address of i is %p\n", &i); // & - address of...
    printf("The address of j is %p\n", *j); // gives the same output as above.
    printf("The value at address i is %d\n", *(&i)); // * - dereference... (prints 6 btw)
    printf("The address of k is %p\n", **(&j)); // gives the address of j



    return 0;
}