#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

// Function to input 5 complex numbers
void inpArray(Complex arr[5]) {
    for (int i = 0; i < 5; i++) {
        printf("Enter real and imaginary parts for complex number %d:\n", i + 1);
        scanf("%f %f", &arr[i].real, &arr[i].imag);
    }
}

// Function to display 5 complex numbers
void displayArray(Complex arr[5]) {
    for (int i = 0; i < 5; i++) {
        if (arr[i].imag >= 0)
            printf("Complex number %d: %.2f + %.2fi\n", i + 1, arr[i].real, arr[i].imag);
        else
            printf("Complex number %d: %.2f - %.2fi\n", i + 1, arr[i].real, -arr[i].imag);
    }
}

int main() {
    Complex arr[5];
    
    // Input complex numbers
    inpArray(arr);
    
    // Display the complex numbers
    printf("You entered the following complex numbers:\n");
    displayArray(arr);
    
    return 0;
}
