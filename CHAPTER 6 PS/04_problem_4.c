#include <stdio.h>

void changeToTenTimes(int*);

void changeToTenTimes(int *a)
{
    *a *= 10;
}

int main()
{
    int a = 10;
    changeToTenTimes(&a);
    printf("The value of a is %d\n", a);
    return 0;
}