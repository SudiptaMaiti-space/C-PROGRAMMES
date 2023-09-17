#include <stdio.h>

// Function to check prime number
int isPrime(int num) {
    // Numbers less than 2 are not prime
    if (num < 2) {
        return 0;
    }

    // Check for divisibility from 2 to sqrt(num)
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // Not a prime number
        }
    }

    return 1;  // Prime number
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}

