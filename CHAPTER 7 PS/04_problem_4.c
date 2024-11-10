#include <stdio.h>

void main()
{
    int arr[10], n;
    printf("Enter a number to print the table of: ");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n", n, i + 1, arr[i]);
    }
}