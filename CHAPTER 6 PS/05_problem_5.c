#include <stdio.h>
/*
Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().
*/

// &a = address of a
// *a = value of a

int* sum(int x, int y)
{
    int s = x + y;
    int* ptr = &s;
    printf("sum: %d\n", s);
    return ptr;
}

float* average(int x, int y)
{
    float avg = (x + y) / 2.0;
    float* ptr = &avg;
    printf("The avg is: %.2f\n", ((x) + (y)) / 2.0);
    return ptr;
}

int main()
{
    int a = 1, b = 5;
    int* ptr1;
    float* ptr2;

    ptr1 = sum(a, b);
    ptr2 = average(a, b);

    printf("The address of sum is: %p and of avg is: %p\n", ptr1, ptr2);

    return 0;
}