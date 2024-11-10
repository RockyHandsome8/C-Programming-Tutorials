#include <stdio.h>
#include <string.h>

int slice(char str[], int m, int n)
{
    int i= 0, count;
    char* ptr1 = &str[m];
    char* ptr2 = &str[n];

    str = ptr1;
    str[n] = '\0';

    return str;
}

void main()
{
    // Write a function slice() to slice a string.
    // It should change the original string such that it is now the sliced string.
    // Take 'm' and 'n' as the start and ending position for slice.

    char str[] = "Rakshit";

    printf("%s", slice(str, 1, 5));
}