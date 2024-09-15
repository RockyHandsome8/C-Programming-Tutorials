// What will be the output of the following program?

#include <stdio.h>

int main()
{
    int a = 10;
    if (a = 11) // true, because it's = not ==
        printf("I am 11");
    else // Agar single statement hi likhni ho to {} ki zaroorat nahi hoti
        printf("I am not 11");

    return 0;
}