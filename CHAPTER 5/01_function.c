#include <stdio.h>

// function prototype
int sum(int, int); 

// function definition
int sum(int x, int y){
    printf("The sum is %d\n", x + y);
    return x + y;
}
int main()
{
    int a = 5; int b = 9;
    int a1 = 2; int b1 = 10;
    int a2 = 8; int b2 = 0;
    // int c = sum(a,b);
    // printf("The sum is %d\n",c);
    sum(a1,b1);
    sum(a2,b2);
    return 0;
}