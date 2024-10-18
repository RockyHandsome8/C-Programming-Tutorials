#include <stdio.h>

int main()
{
   // Declare and initialize the 2D array at the same time
    int arr[3][2] = {
        {1, 4},
        {7, 9},
        {11, 22}
    };

    for (int i = 0; i < 3; i++) // Loop through rows
    {
        for (int j = 0; j < 2; j++) // Loop through columns
        {
            printf("array[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }

    return 0;
}