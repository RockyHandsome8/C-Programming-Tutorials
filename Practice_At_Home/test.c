#include <stdio.h>

int main()
{
    char greeting[] = "Hello";  // A string, stored as an array of characters

    printf("%s", greeting);
    printf("%c", greeting[4]); // o
    return 0;
}