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
    struct employee facebook[100]; // an array of structures
    // we can access this data using:
    facebook[0].code = 100;
    facebook[1].code = 77;
    
    struct employee rakshit = {100, 71.22, "Rakshit"};
    printf("%d %.2f %s", rakshit.code, rakshit.salary, rakshit.name);
    return 0;
}