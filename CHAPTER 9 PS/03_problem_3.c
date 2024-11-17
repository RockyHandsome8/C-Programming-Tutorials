#include <stdio.h>

typedef struct
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
} Emp;

void main()
{
    // Write a program to illustrate the use of arrow operator in C.
    Emp e1;
    e1.code = 56;
    Emp *ptr = &e1;
    printf("%d", ptr->code); // Arrow operator
}