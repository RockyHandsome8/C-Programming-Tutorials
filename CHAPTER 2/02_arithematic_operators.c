#include <stdio.h>

int main()
{
    int a = 4;
    int b = 3;
    int c = a + b;
    printf("The value of a is %d and value of b is %d and their sum is %d", a, b, c);
    // % is the modular division operator
    //  % -> returns the remainder
    //  % -> cannot be applied on float
    //  % -> sign is same as Of numerator, for ex: (-50/02=-1 )
    printf("The remainder when a is divided by b is %d", a % b);


    // There is no operator to perform exponentiation in C however we can use pow(x,y) from <math.h>.

    // An Arithmetic operation between
    // • int and int -> int
    // • int and float -> float
    // • float and float -> float

    // • 5/2 becomes 2 as both the operands are int
    // • 5.0/2 becomes 2.5 as one of the operands is fl
    // • 2/5 becomes 0 as both the operands are int
    return 0;
}