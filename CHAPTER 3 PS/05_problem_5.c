#include <stdio.h>

int main()
{
    /*
    Write a program to determine whether a character entered
    by the user is lowercase or not.
    */

    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);

    printf("The given character is %c \n", ch);
    printf("The ascii value of the given character is %d \n", ch);

    if (ch >= 97 && ch <= 122)
    {
        printf("The character is lowercase");
    }
    else if (ch >= 65 && ch <= 90)
    {
        printf("The character is not lower case");
    }
    else
    {
        printf("Invalid input");
    }
    return 0;
}