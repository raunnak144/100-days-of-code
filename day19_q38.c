//Write a program to find the sum of digits of a number.
#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num; // Store original number for display

    // Calculate sum of digits
    while(num != 0) {
        remainder = num % 10;  // Get last digit
        sum += remainder;      // Add to sum
        num /= 10;             // Remove last digit
    }

    printf("Sum of digits of %d = %d\n", original, sum);

    return 0;
}
