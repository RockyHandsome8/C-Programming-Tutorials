#include <stdio.h>

int main()
{
    float a = 9.0;
    int b = 2;
    float c = a / b;
    printf("The value of a/b is %f\n", c);

    int d = 9.2;
    printf("The value of d is %d", d);
    // The above statement prints 9 because of the incompatibility in type


    // In C language, mathematical rules like BODMAS don't apply, instead it uses the operator priority order

    // The following table lists the operator priority in C

    // Priority     Operators
    //   1st          * / %
    //   2nd           + -
    //   3rd            =

    // Operators of higher priority are evaluated first in the ABSENCE  of parenthesis.


    // When operators of equal priority are present in an expression, the tie is taken care of by
    // associativity.

    // x*y/z -> (x*y)/z
    // x/y*z -> (x/y)*z

    // * and / follows left to right associativity

    // Pro Tip: Always use parenthesis in case of confusion
    return 0;
}