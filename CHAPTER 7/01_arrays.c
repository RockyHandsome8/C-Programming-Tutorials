#include <stdio.h>

void main()
{
    // Write a C program to find the minimum and maximum element in an array.

    int arr[3] = {1, 2, 3}, min = arr[0], max = arr[0];

    for (int i = 0; i < 3; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Minimum element = %d\nMaximum Element = %d", min, max);
}