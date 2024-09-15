#include <stdio.h>

int main()
{
    // The condition can be any valid expression. 
    // In C a NON-ZERO value is considered to be TRUE.

    if (1)
    {
        printf("This if is executed!\n");
    }
    if (2345)
    {
        printf("This if is also executed!\n");
    }
    if (2.74)
    {
        printf("This if is also executed!\n");
    }
    if ('c')
    {
        printf("This if is also executed!\n");
    }
    if (0)
    {
        printf("I am zero, I am not executed\n");
    }
    return 0;
}