#include <stdio.h>

int main()
{
    /*
    Calculate income tax paid by an employee to the government as per the slabs
    mentioned below:

    Income Slab         Tax
    2.5-5.0L            5%
    5.OL- 10.OL         10%
    Above 10.0L         30%

    Note: There is no tax below 2.5L. Take income amount as an input form the user.
    */

    int income;
    printf("Enter your income\n");
    scanf(" %d", &income);

    if (income < 250000)
    {
        printf("\nYou have no tax to pay.\n");
    }
    else if ((income >= 250000 && income < 5000000))
    {
        printf("5%% tax is payable on your income amount\n");
    }
    else if ((income >= 500000 && income < 10000000))
    {
        printf("20%% tax is payable on your income amount\n");
    }
    else if ((income > 1000000))
    {
        printf("30%% tax is payable on your income amount\n");
    }

    return 0;
}