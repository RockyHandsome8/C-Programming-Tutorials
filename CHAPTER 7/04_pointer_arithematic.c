#include <stdio.h>
    
int main()
{
    // POINTER ARITHEMATIC USING INTEGER POINTER
    // int a = 5;
    // int *ptr = &a;
    // printf("The addtess of a is %u\n", &a);
    // printf("The addtess of a is %u\n", ptr);
    // ptr++; // In this case, ptr will be incremented by the no. of bytes it's occupying in this architecture, for ex: 4
    // printf("The addtess of ptr is %u\n", ptr);
    
    // POINTER ARITHEMATIC USING CHARACTER POINTER
    char a = 'A';
    char *ptr = &a;
    printf("The addtess of a is %u\n", &a);
    printf("The addtess of a is %u\n", ptr);
    ptr++; // ptr will be incremented by the no. of bytes it's occupying in this architecture, for ex: 4
    printf("The addtess of ptr is %u\n", ptr);
    return 0;
}