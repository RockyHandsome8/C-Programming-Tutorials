#include <stdio.h>
#include <string.h>

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

void main()
{
    // Write your own version of strlen function from <string.h>
    char str[] = "Rakshit";
    printf("%d", strLen(str));
}