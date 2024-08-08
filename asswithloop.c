#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0; // Not prime
    }

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }

    return 1; // Prime
}

int main() {
    int num;
    int control = 1;

    while (control) {
        printf("Enter a positive integer: ");
        scanf("%d", &num);

        if (is_prime(num)) {
            printf("%d is a prime number.\n", num);
        } else {
            printf("%d is not a prime number.\n", num);
        }

        printf("Do you want to continue (0 to exit, 1 to continue): ");
        scanf("%d", &control);
    }

    return 0;
}
