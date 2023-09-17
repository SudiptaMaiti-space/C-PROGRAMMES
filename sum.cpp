#include <stdio.h>
#include <math.h>

double factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return (n * factorial(n - 1));
}

double series_sum(int n) {
    double total_sum = 0;

    for (int i = 1; i <= n; i++) {
        double term = pow(i, i) / factorial(i);
        total_sum += term;
    }

    return total_sum;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    double result = series_sum(n);
    printf("Sum of the series: %lf\n", result);

    return 0;
}

