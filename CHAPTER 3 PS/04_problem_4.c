#include <stdio.h>

int main()
{
    /*
    Write a program which checks if the year entered by the user is a leap year or not.
    */
    int yr;
    printf("Enter Year: \n");
    scanf("%d", &yr);
    if (yr % 4 == 0 && yr % 100 != 0 || yr % 400 == 0)
    {
        printf("It is a leap year.\n");
    }
    else
    {
        printf("It is not a leap year.\n");
    }
    return 0;
}