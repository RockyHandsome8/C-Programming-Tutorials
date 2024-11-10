#include <stdio.h>
#include <string.h>

void main()
{
    char name[] = "Rakshit";
    char s1[56] = "Rakshit";
    char s2[56] = " bhai";
    // printf("%d", strlen(name)); // Prints the length of a string.

    char target[30];
    strcpy(target, name); // Copies one string to another.
    // printf("%s %s\n", name, target);

    strcat(s1, s2); // Concatinates s2 with s1
    printf("%s\n", s1);

    int a = strcmp("deep", "joke");
    printf("%d", a);

    /*
    This function is used to compare two strings. It returns O if the strings are equal, a
    negative value if the first string's mismatching character's ASCII value is less than the
    second string's corresponding mismatching character, and a positive value otherwise.
    */
}