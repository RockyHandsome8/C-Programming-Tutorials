#include <stdio.h>

int main() {
    int n, original, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    // Store the original number for comparison
    original = n;

    // Reverse the number
    while (n != 0) {
        remainder = n % 10;           // Get the last digit
        reversed = reversed * 10 + remainder; // Build the reversed number
        n /= 10;                      // Remove the last digit from n
    }

    // Check if the original number is equal to its reverse
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
