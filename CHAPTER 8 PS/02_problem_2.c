#include <stdio.h>

void main()
{
    // Write a program to take string as an input from the user using %c and %s confirm
    // that the strings are equal.

    // char str[] = {'h', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\0'};
    char str[7];
    gets(str);

    for (int i = 0; i < 6; i++)
    {
        scanf("%c", &str[i]);
        fflush(stdin); // Flushes the \n when you press ENTER on the keyboard.
    }
    str[6] = '\0'; // This is the null character that tells C to stop reading.

    for (int i = 0; i < 6; i++)
    {
        printf("%c", str[i]);
    }
    
    printf("%s", str);
}