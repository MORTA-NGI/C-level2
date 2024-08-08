#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts, difficulty, rounds, score, hint_counter;
    char play_again;

    srand(time(NULL));

    printf("Welcome to the Number Guessing Game!\n");

    printf("Choose a difficulty level:\n");
    printf("1. Easy (1-20)\n");
    printf("2. Medium (1-50)\n");
    printf("3. Hard (1-100)\n");
    scanf("%d", &difficulty);

    // Set number range based on difficulty
    switch (difficulty) {
        case 1:
            number = rand() % 20 + 1;
            break;
        case 2:
            number = rand() % 50 + 1;
            break;
        case 3:
            number = rand() % 100 + 1;
            break;
        default:
            printf("Invalid difficulty. Defaulting to medium.\n");
            number = rand() % 50 + 1;
    }

    printf("Enter the number of rounds: ");
    scanf("%d", &rounds);

    score = 0;

    for (int round = 1; round <= rounds; round++) {
        printf("\nRound %d:\n", round);

        number = rand() % (difficulty * 10) + 1;
        attempts = 0;
        hint_counter = 0;

        do {
            printf("Guess the number: ");
            scanf("%d", &guess);
            attempts++;

            if (guess > number) {
                printf("Too high!\n");
            } else if (guess < number) {
                printf("Too low!\n");
            } else {
                printf("Correct! You guessed it in %d attempts.\n", attempts);
                // Update score based on attempts
                score += 100 - (attempts * 10);
                break;
            }

            // Hint logic can be added here
        } while (guess != number);
    }

    printf("\nYour final score is: %d\n", score);

    return 0;
}
