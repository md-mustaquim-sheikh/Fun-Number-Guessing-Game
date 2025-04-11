#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    char choice;

    // Seed random number generator
    srand(time(0));

    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess the number between 1 and 100.\n");

    do {
        number = rand() % 100 + 1;
        attempts = 0;

        while (1) {
            printf("Enter your guess: ");
            scanf("%d", &guess);
            attempts++;

            if (guess < number) {
                printf("Too low! Try again.\n");
            } else if (guess > number) {
                printf("Too high! Try again.\n");
            } else {
                printf("Congratulations! You guessed it in %d attempts.\n", attempts);
                break;
            }
        }

        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Thanks for playing! Goodbye!\n");

    return 0;
}
