#include <stdio.h>

int main()
{
    // Write a program to check whether a given character is present in a string or not.
    char str[] = "Rakshit";
    int contain = 0;
    for (int i = 0; i < 7; i++)
    {
        if (str[i] == 'a')
        {
            contain = 1;
            break;
        }
    }
    if (contain == 1)
        printf("Yes it contains the character");
    
    else
        printf("No it does not contain the character");
    
    return 0;
}