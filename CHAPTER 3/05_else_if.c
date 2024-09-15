#include <stdio.h>

int main()
{
    int age = 65;

    if (age > 60)
    {
        printf("You can drive and you are a senior citizen");
    }
    else if (age > 45)
    {
        printf("You can drive and you are elder");
    }

    else
    {
        printf("You cannot drive");
    }

    return 0;
}