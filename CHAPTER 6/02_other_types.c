#include <stdio.h>
    
int main()
{
    // Pointer is a variable that stores the address of another variable.
    char i = 72;
    printf("The address of i is %p\n", &i); // & - address of...

    int* j = &i; // j is an character pointer pointing to i
    printf("The address of j is %p\n", j); // gives the same output as above.

    printf("The value at address j is %d\n", *j); // * - dereference...

    float k = 5.232;
    float* k1 = &k;
    printf("The address of k is %p\n", *(&j)); // gives the same output as above.
    return 0;
}