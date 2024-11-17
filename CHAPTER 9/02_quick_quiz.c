#include <stdio.h>
#include <string.h>


struct employee
{
    int code; // This declares a new user defined data type!
    float salary;
    char name[10];
};


int main()
{
    struct employee e1, e2, e3;

    printf("Enter code of employee: ");
    scanf("%d", &e1.code);

    printf("Enter salary of employee: ");
    scanf("%f", &e1.salary);

    printf("Enter name of employee: ");
    scanf("%s", &e1.name);

    // strcpy(e1.name, "Rakshit");
    // e1.salary = 54.44;

    printf("%d %f %s", e1.code, e1.salary, e1.name);



    printf("\nEnter code of employee: ");
    scanf("%d", &e2.code);

    printf("Enter salary of employee: ");
    scanf("%f", &e2.salary);

    printf("Enter name of employee: ");
    scanf("%s", &e2.name);

    printf("%d %f %s", e2.code, e2.salary, e2.name);



    printf("\nEnter code of employee: ");
    scanf("%d", &e3.code);

    printf("Enter salary of employee: ");
    scanf("%f", &e3.salary);

    printf("Enter name of employee: ");
    scanf("%s", &e3.name);

    printf("%d %f %s", e3.code, e3.salary, e3.name);
    return 0;
}