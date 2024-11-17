#include <stdio.h>

typedef struct
{
    float real;
    float imag;
} Complex;

void display(Complex c)
{
    if (c.imag >= 0)
        printf("%.2f + %.2fi\n", c.real, c.imag);
    else
        printf("%.2f - %.2fi\n", c.real, -c.imag);
}

void main()
{
    // Write a program with a structure representing a complex number.
    Complex i = {69, 96};
    display(i);
}