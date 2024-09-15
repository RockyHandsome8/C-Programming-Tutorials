#include <stdio.h>

int main()
{
    // Explain step by step evaluation of 3*x/y — Z+k, where x=2, y=3, z=3,
    int x = 2, y = 3, z = 3, k = 1;
    int a = 3 * x / y - z + k;
    printf("%d", a);
    return 0;
}