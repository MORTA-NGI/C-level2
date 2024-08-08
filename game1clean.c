#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generate_random_number() {
    srand(time(NULL));
    return rand() % 100 + 1;
}

void get_guess(int *guess) {
    printf("Guess the number (between 1 and 100): ");
    scanf("%d", guess);
}

void check_guess(int guess, int number, int *attempts) {
    (*attempts)++;

    if (guess > number) {
        printf("Too high!\n");
    } else if (guess < number) {
        printf("Too low!\n");
    } else {
        printf("Congratulations! You guessed the number in %d attempts.\n", *attempts);
    }
}

int main() {
    int number, guess, attempts = 0;

    number = generate_random_number();

    do {
        get_guess(&guess);
        check_guess(guess, number, &attempts);
    } while (guess != number);

    return 0;
}
