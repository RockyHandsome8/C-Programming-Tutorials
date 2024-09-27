#include <stdio.h>
    
int main()
{
    /*
    following are the bitwise operators:

    &, |, <<, >>, ~, ^

    &  = AND
    |  = OR
    ~  = NOT
    << = Left Shift
    >> = Right Shift
    ^  = XOR

    -> The & (bitwise AND) in C takes two numbers as operands and does AND on every bit of two numbers. 
       The result of AND is 1 only if both bits are 1.  
    -> The | (bitwise OR) in C takes two numbers as operands and does OR on every bit of two numbers. 
       The result of OR is 1 if any of the two bits is 1. 
    -> The ^ (bitwise XOR) in C takes two numbers as operands and does XOR on every bit of two numbers. 
       The result of XOR is 1 if the two bits are different. 
    -> The << (left shift) in C takes two numbers, the left shifts the bits of the first operand, and 
       the second operand decides the number of places to shift. 
    -> The >> (right shift) in C takes two numbers, right shifts the bits of the first operand, and the 
       second operand decides the number of places to shift. 
    -> The ~ (bitwise NOT) in C takes one number and inverts all bits of it.


    Let’s look at the truth table of the bitwise operators.

    _______________________________________
    | X | Y | (X & Y) | (X | Y) | (X ^ Y) |
    ---------------------------------------
    | 0 | 0 |    0    |    0    |    0    |
    | 0 | 1 |    0    |    1    |    1    |
    | 1 | 0 |    0    |    1    |    1    |
    | 1 | 1 |    1    |    1    |    0    |
    */



    // C Program to demonstrate use of bitwise operators
    
    // a = 5 (00000101 in 8-bit binary), b = 9 (00001001 in
    // 8-bit binary)
    unsigned int a = 5, b = 9;

    // The result is 00000001
    printf("a = %u, b = %u\n", a, b);
    printf("a&b = %u\n", a & b);

    // The result is 00001101
    printf("a|b = %u\n", a | b);

    // The result is 00001100
    printf("a^b = %u\n", a ^ b);

    // The result is 11111111111111111111111111111010
    // (assuming 32-bit unsigned int)
    printf("~a = %u\n", a = ~a);

    // The result is 00010010
    printf("b<<1 = %u\n", b << 1);

    // The result is 00000100
    printf("b>>1 = %u\n", b >> 1);


    return 0;
}