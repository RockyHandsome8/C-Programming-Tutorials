#include <stdio.h>
// void show(struct employee e);
// Complete this function to display the contents of employee.

struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
};

void show(struct employee e)
{
    printf("%d %.2f %s", e.code, e.salary, e.name);
}

void main()
{
    struct employee e = {69, 6996, "Rakshit"};
    show(e);
}