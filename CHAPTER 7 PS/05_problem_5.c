#include <stdio.h>

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void reverse(int arr[], int n)
{
    /*
    for i from 0 to n/2
    arr[i] = arr[n-i-1]
    */

    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

void main()
{
    // Reverse an array using external function.
    int s[3] = {2, 45, 3};
    printArr(s, 3);
    reverse(s, 3);
    printArr(s, 3);
}