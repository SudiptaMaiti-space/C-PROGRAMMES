#include <stdio.h>

// Recursive function to find the sum of first n natural numbers
int sumRecursion(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sumRecursion(n - 1);
    }
}

// Iterative function to find the sum of first n natural numbers
int sumIteration(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Using recursion
    
    printf("Sum of first %d natural numbers using recursion: %d\n", n, sumRecursion(n));

    // Using iteration
    printf("Sum of first %d natural numbers using iteration: %d\n", n, sumIteration(n));

    return 0;
}

