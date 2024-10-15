#include <stdio.h>

int convertToFeh(int celc)
{
    printf("%d degree Celcius in Fahrenheit is %d\n", celc, ((celc*(9/5)) + 32));
}

int main()
{
    // Write a function to convert Celcius to Fahrenheit.
    convertToFeh(37);
    convertToFeh(73);
    convertToFeh(100);
    convertToFeh(-5);
    return 0;
}