#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*
                            PROJECT 1: NUMBER GUESSING GAME
    We will write a program that generates a random number and asks the player to guess
    it. If the player's guess is higher than the actual number, the program displays "Lower
    number please". Similarly, if the user's guess is too low, the program prints "Higher
    number please".

    When the user guesses the correct number, the program displays the number of
    guesses the player used to arrive at the number.

        Hint: Use loop & use a random number generator.
    */

    srand(time(0));
    int randomNumber = ((rand() % 10) + 1); // random number between 1 and 10.
    printf("Random Number between 1 and 6 is: %d\n", randomNumber);

    printf("\t\t\t\tPROJECT 1:\n");

    int choice, i = 0;
    char quit;

    while (randomNumber != choice)
    { // while loop.
        i++;
        printf("\nGuess a number from 1 to 10.\n");
        scanf("%d", &choice);

        if (choice > randomNumber && (choice >= 1 && choice <= 10))
        {
            printf("Lower number, please try again...\n");
        }
        else if (choice < randomNumber && (choice >= 1 && choice <= 10))
        {
            printf("Higher number, please try again...\n");
        }
        else if (choice == randomNumber)
        {
            printf("Correct guess, you have used %d guess(es) to guess the right number.\n", i);
        }

        else if(choice < 1 || choice > 10)
        {
            printf("Invalid choice. Try again!\n");
        }
    }

    return 0;
}