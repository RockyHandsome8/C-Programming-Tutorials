#include <stdio.h>

void main()
{
    char str[] = {'a', 'b', 'c', '\0'};
    char temp = str[0];
    int i = 0;
    while (temp != '\0')
    {
        printf("\n%c", temp);
        i++;
        temp = str[i];
    }
}