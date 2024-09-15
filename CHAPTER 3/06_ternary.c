#include <stdio.h>

int main()
{
    // ternary operator

    // condition ? expression-if-true : expression-if-false;

    int a = 345;
    int b = 325181;

    a > b ? printf("a is greater\n") : printf("b is greater\n");
    // The above code is same as...

    if (a > b)
    {
        printf("a is greater\n");
    }
    else
    {
        printf("b is greater\n");
    }

    return 0;
}