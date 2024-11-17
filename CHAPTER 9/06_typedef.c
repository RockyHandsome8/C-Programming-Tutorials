#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
} Emp;

void main()
{
    // typedef keyword, basicaly creates custom data-type
    // typedef keyword makes special structures in C that can be used to make custom data-types such as imagianary numbers in C.
    typedef int rakshit;
    // int a = 88;
    rakshit a = 88;
    printf("The value of a is %d\n", a);

    // struct employee e = {69, 6996, "Rakshit"};
    Emp e = {69, 6996, "Rakshit"}; // Same as above
    Emp *ptr1;
    // printf("%d %.2f %s", e.code, e.salary, e.name);
    //                    OR
    printf("%d %.2f %s", ptr1->code, ptr1->salary, ptr1->name);
}