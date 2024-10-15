#include <stdio.h>

returning_5(int *ptr)
{
    printf("The value of ptr is %d\n", ptr);
    printf("The value at ptr is %d\n", *ptr);
    return 5;
}

int main()
{
    /*
    Write a program having a variable 'i'. Print the address of 'i'. Pass this variable to
    a function and print its address. Are these addresses same? Why?
    */
    int i = 2;
    int *ptr = &i;
    printf("The address of i is %p\n", &i);
    printf("The value of i is %d\n", *ptr);

    returning_5(ptr);

    return 0;
}