#include <stdio.h>

int main() {
    // int a, b, temp;

    // // Input two numbers
    // printf("Enter two numbers (a and b): ");
    // scanf("%d %d", &a, &b);

    // // Display original values
    // printf("Before swapping: a = %d, b = %d\n", a, b);

    // // Swap logic
    // temp = a;
    // a = b;
    // b = temp;

    // // Display swapped values
    // printf("After swapping: a = %d, b = %d\n", a, b);



    // WITHOUT USING ANY VARIABLE FOR SWAPPING THE NUMBERS.

    int a, b;

    // Input two numbers
    printf("Enter two numbers (a and b): ");
    scanf("%d %d", &a, &b);

    // Display original values
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap logic (without a third variable)
    a = a + b;  // a now holds the sum of a and b
    b = a - b;  // b is now (a + b) - b, which is the original value of a
    a = a - b;  // a is now (a + b) - a, which is the original value of b

    // Display swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
