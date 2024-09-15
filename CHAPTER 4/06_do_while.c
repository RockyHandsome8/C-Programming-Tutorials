#include <stdio.h>

int main()
{
    int i = 0;
    /*
    The do-while loop executes at least once
    
    It first executes the code and then checks the condition
    before executing it further.
    */
    do
    {
        printf("The value of i is %d\n", i);
        i++;
    } while (i < 4);

    return 0;
}