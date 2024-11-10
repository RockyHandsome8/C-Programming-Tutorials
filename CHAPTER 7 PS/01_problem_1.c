#include <stdio.h>

void main()
{
    /*
    Create an array of 10 numbers. Verify using pointer arithemetic that
    (ptr+2) points to the third element where ptr is a pointer pointing
    to the first element of the array.
    */

    int arr[] = {32, 56, 68, 11, 25, 48, 01, 78, 77, 99};
    printf("The size of arr is: %d\n", sizeof(arr) / sizeof(arr[0]));
    // Number of elements = (Total size of array​) / (Size of one element)

    int *ptr = arr;
    printf("The value at address %u is %d", ptr + 3, *(ptr + 3));
}