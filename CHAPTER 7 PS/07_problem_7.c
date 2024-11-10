#include <stdio.h>

void main()
{
    // Create an arr[3][10] containing multiplication tables of the numbers 2, 7 & 9 respectively.
    int arr[3][10];
    int mul[] = {2, 7, 9};

    for (int i = 0; i < 3; i++) // Loop through rows
    {
        for (int j = 0; j < 10; j++) // Loop through columns
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++) // Loop through rows
    {
        for (int j = 0; j < 10; j++) // Loop through columns
        {
            printf("%d X %d = %d\n", mul[i], j + 1, arr[i][j]);
        }
        printf("\n");
    }
}