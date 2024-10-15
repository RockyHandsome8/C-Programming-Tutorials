#include <stdio.h>

int main()
{
    int nums[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter 5 numbers: ");
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d", nums[i]);

        if (i < 4) // To put the commas after the numbers
        {
            printf(",");
        }
    }

    return 0;
}