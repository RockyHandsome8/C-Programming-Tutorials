#include <stdio.h>

void printArray(int arr[], int n) // Can also be written as
// void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++) // To make the array
    {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) // To print the array
    {
        printf("%d", arr[i]);

        if (i < (n-1)) // To put the commas after the numbers
        {
            printf(",");
        }
    }
}

int main()
{
    int arr[3];
    printArray(arr, 3);

    return 0;
}