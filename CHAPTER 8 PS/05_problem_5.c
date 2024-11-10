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

void copyStr(char dest[], char src[])
{
    for (int i = 0; i < strLen(src); i++)
    {
        dest[i] = src[i];
    }
    dest[strLen(src)] = '\0';
    
}

void main()
{
    // Write your own version of strcpy function from <string.

    char src[] = "Hello World!";
    char dest[30];

    copyStr(dest, src);
    printf("\n%s\n%s", src, dest);
}