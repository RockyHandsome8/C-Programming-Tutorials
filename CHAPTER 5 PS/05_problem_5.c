#include <stdio.h>
    
int main()
{
    // what will be the output of the following code?
    int a = 4;
    printf("%d %d %d \n", a, ++a, a++);
    // This prints (6, 6, 4)
    // This is because the evaluation order in C is from right to left, so
    // (a, a++, ++a)
    // (<----------)
    // But this happens only if the evaluation order is not defined,
    // which means that (4, 5, 5) is also correct IF the evaluation order is defined.
    return 0;
}