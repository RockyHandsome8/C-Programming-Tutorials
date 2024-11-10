#include <stdio.h>

int strLen(char str[])
{
    int i = 0, count;
    char c = str[i];
    while (c != '\0')
    {
        c = str[i];
        i++;
    }

    count = i - 1;
    return count;
}

int countChar(char str[], char c)
{
    int count = 0;
    for (int i = 0; i < strLen(str); i++)
    {
        if (str[i] == c)
        {
            count++;
        }
    }
    return count;
}

void main()
{
    // Write a program to count the occurance of a given character in a string.

    char str[] = "hello world!";
    printf("\nString: %s\ncount of %c is %d", str, 'l', countChar(str, 'l'));
}