//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    int numerator = 1;
    int denominator = 1;

    // Input number of terms
    printf("Enter number of terms: ");
    scanf("%d", &n);

    // Calculate sum of series
    for(int i = 1; i <= n; i++) {
        sum += (double)numerator / denominator;

        // Update numerator and denominator for next term
        numerator += 2;             // next odd number
        if(i == 1)
            denominator = 4;        // 2nd term denominator = 4
        else
            denominator += 2;       // then increment by 2
    }

    printf("Sum of the series up to %d terms = %.2lf\n", n, sum);

    return 0;
}
