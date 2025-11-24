//Write a program to check if a number is a strong number.
#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, original, remainder, sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; // Store original number

    // Calculate sum of factorials of digits
    while(num != 0) {
        remainder = num % 10;        // Get last digit
        sum += factorial(remainder); // Add factorial of digit
        num /= 10;                   // Remove last digit
    }

    // Check if strong number
    if(sum == original) {
        printf("%d is a Strong number.\n", original);
    } else {
        printf("%d is not a Strong number.\n", original);
    }

    return 0;
}
