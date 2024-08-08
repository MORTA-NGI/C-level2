#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char player, computer;
    int choice;

    srand(time(NULL));

    printf("Rock, Paper, Scissors!\n");
    printf("Enter your choice (R for Rock, P for Paper, S for Scissors): ");
    scanf("%c", &player);

    // Generate computer's choice
    choice = rand() % 3 + 1;
    if (choice == 1) {
        computer = 'R';
    } else if (choice == 2) {
        computer = 'P';
    } else {
        computer = 'S';
    }

    printf("Computer chose: %c\n", computer);

    // Determine the winner
    if (player == computer) {
        printf("It's a tie!\n");
    } else if ((player == 'R' && computer == 'S') ||
               (player == 'P' && computer == 'R') ||
               (player == 'S' && computer == 'P')) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }

    return 0;
}
