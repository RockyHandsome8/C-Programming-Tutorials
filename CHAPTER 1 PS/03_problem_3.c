// Write a program to convert Celsius (Centigrade degrees temperature to
// Fahrenheit).
// F = (9/5)C + 32

#include <stdio.h>

int main()
{
    float degC;
    printf("enter temp in degree celcius: \n");
    scanf("%f", &degC);
    printf("The temp in degree fahrenheit is:\n%f", ((9.0 / 5.0) * degC) + 32);

    return 0;
}