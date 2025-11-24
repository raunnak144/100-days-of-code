//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    int numerator = 2;
    int denominator = 3;

    // Input number of terms
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Calculate sum of series
    for(int i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;

        numerator += 2;       // next even number
        denominator += 4;     // next denominator (increment by 4)
    }

    printf("Sum of the series up to %d terms = %.2lf\n", n, sum);

    return 0;
}
