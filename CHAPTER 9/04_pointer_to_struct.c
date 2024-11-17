#include <stdio.h>

struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
}; 

void main()
{
    struct employee e1;
    e1.code = 56;
    struct employee *ptr;
    ptr = &e1;
    // Now we can print structure elements using:
    // printf("%d", (*ptr).code);
    // The same thing can be done using this:
    printf("%d", ptr->code); // Arrow operator
    
}