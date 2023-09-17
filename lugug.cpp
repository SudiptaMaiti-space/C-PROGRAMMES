#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0;  // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;  // Number is divisible by i, hence not prime
        }
    }
    return 1;  // Number is prime
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d: ", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    printf("Composite numbers up to %d: ", n);
    for (int i = 2; i <= n; i++) {
        if (!isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}

