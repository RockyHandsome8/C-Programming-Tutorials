#include <stdio.h>

void main()
{
    // Repear problem 7 for a custom input entered by the user.

    int n, arr[1][10];
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < 1; i++) // Loop through rows
    {
        for (int j = 0; j < 10; j++) // Loop through columns
        {
            arr[i][j] = n * (j + 1);
        }
    }

    for (int i = 0; i < 1; i++) // Loop through rows
    {
        for (int j = 0; j < 10; j++) // Loop through columns
        {
            printf("%d X %d = %d\n", n, j + 1, arr[i][j]);
        }
    }
}