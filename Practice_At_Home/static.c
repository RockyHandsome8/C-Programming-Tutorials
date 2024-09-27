#include <stdio.h>

void staticFunc()
{
    static int a = 0;
    a++;
    printf("%d\n", a);
}
int main()
{
    staticFunc(); // Prints 1
    staticFunc(); // Prints 2
    return 0;
}