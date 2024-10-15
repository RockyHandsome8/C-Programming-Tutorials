#include <stdio.h>

int force(int mass)
{
    printf("Weight of the body of mass %d is %.2f kg\n", mass, mass * 9.8);
}

int main()
{
    // WAF to calculate the force of attraction on a body of mass 'm' exerted by earth.

    // Consider g = 9.8 m/s^2

    force(10);
    force(1);

    return 0;
}