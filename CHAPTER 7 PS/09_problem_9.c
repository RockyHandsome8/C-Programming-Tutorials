#include <stdio.h>

void main()
{
    // Create a 3D array and print the address of it's elements in increasing order.
    int arr[3][3][3]; // 2*4*3 = 48 bytes allocated for this array.

    // Initializing elements of the array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                arr[i][j][k] = i + j + k;
            }
        }
    }

    // Accessing elements of the array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%u ", &arr[i][j][k]);
                
            }
        }
    }
}