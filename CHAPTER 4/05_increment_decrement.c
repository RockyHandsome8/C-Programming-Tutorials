#include <stdio.h>

int main()
{
    int i = 5;
    printf("The value of i is %d\n", i);

    i = i + 5; // 10
    printf("The value of i is %d\n", i);

    /*
    i++; 11, This is increment operator (post increment operator).
    ++i; This is also increment operator (pre increment operator), but...

    i++ prints i first and then increments i
    ++i increments i first and then prints i
    */
    
    printf("The value of i is %d\n", i++);
    printf("The value of i is %d\n", ++i);

    i += 2;
    printf("The value of i is %d\n", i);

    return 0;
}