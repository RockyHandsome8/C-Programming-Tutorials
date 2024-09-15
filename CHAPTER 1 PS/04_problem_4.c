// Write a program to calculate simple interest for a set of values representing
// principal, number of years and rate of interest.

// interest = (p*r*t)/100

#include <stdio.h>
    
int main()
{
    float p, r, t;
    p = 34.1;
    r = 8;
    t = 5;
    printf("the value of simple interest is: %f", (p*r*t)/100);

    return 0;
}