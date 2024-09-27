#include <stdio.h>
#include "def.c"

int main()
{
    extern int raksh;
    // raksh = 20;
    printf("%d", raksh); // Prints 90 (Global Value)
    return 0;
}