#include <stdio.h>

void encrypt(char *str, int len)
{
    for (int i = 0; i < len; i++)
    {
        str[i]++;
    }
    printf("%s\n", str);
}

void decrypt(char *str, int len)
{
    for (int i = 0; i < len; i++)
    {
        str[i]--;
    }
    printf("%s\n", str);
}

void main()
{
    // Write a program to encrypt a string by adding 1 to the ascii value Of its
    // characters.

    char str[] = "Rakshit";
    encrypt(str, 7);
    decrypt(str, 7);
}