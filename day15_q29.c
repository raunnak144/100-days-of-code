//Write a program to calculate the factorial of a number.
#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1; // Use unsigned long long for large numbers

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if number is negative
    if(n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using for loop
        for(i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}
