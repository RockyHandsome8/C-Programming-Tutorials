#include <stdio.h>

// Structure to represent a bank account
struct BankAccount {
    int accountNumber;         // Unique identifier for the account
    char accountHolderName[100]; // Full name of the account holder
    char accountType[20];      // Type of account (e.g., "Savings", "Checking")
    float balance;             // Current balance in the account
    char branch[50];           // Name or location of the branch
    char contactNumber[15];    // Contact number of the account holder
};
