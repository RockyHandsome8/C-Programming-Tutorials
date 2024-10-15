#include <stdio.h>

// pyramidStar(int n)
// {
//     printf("*\n");
//     pyramidStar(n+1);
// }

int main()
{
    /*
    Write a function to print the following pattern (first n lines)

    *
    ***
    *****

    */
    int n = 3;
    // pyramidStar(n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; (j <= 2 * i - 1); j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}