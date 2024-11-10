#include <stdio.h>

void count_positive_int(int arr[], int n)
{
    int c = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            c++;
        }
    }

    printf("%d", c);
}

void main()
{
    // Count number of positive int in an array
    int arr[] = {1, -2, 9};

    count_positive_int(arr, 3);
}