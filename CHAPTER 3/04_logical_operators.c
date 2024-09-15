// USAGE OF LOGICAL OPERATORS:

// && (AND) -> is true when both the conditions are true
//  a. "1 and 0" is evaluated as false.
//  b. "0 and 0" is evaluated as false.
//  c. "1 and 1" is evaluated as true.

// 0 => false, 1 => true

// || (OR) -> is true when at least one of the conditions is true. (1 or O -> 1) (1 or 1 -> 1)

// ! (NOT) -> returns true if given false and false if given true
//  a. !(3==3) -> evaluates to false
//  b. !(3>30) -> evaluates to true.

#include <stdio.h>

int main()
{
    int a = 1, b = 0;
    printf("The value of a and a is %d\n", a && a);
    printf("The value of a and b is %d\n", a && b);
    printf("The value of b or b is %d\n", b || b);
    printf("The value of a or b is %d\n", a || b);
    printf("The value of NOT(a) is %d", !a);

    return 0;
}