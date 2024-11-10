#include <stdio.h>
    
void main()
{
    // strings are 1D character arrays terminated by a (\0) null character.
    // Strings are contiguous blocks in memory

    // char st[] = {'H','e','l','l','o', '\0'};
    // printf("First character is %c \n", st[0]);

    char st[] = "Hello World!"; // Same as above
    // for (int i = 0; i <= 12; i++)
    // {
    //     printf("%c", st[i]);
    // }
    
    //      OR

    printf("%s", st);

}