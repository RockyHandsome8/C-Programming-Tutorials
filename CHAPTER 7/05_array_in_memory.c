#include <stdio.h>

int main()
{
    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter 5 marks: ");
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The address of marks at index %d is %u\n", &marks[i], marks[i]);

        // if (i < 4) // To put the commas after the marks
        // {
        //     printf(",");
        // }
    }

    return 0;
}