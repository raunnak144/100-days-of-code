//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int num, remainder;
    long long product = 1; // Use long long for large products
    int hasOdd = 0; // Flag to check if there is any odd digit

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num; // Store original number

    // Calculate product of odd digits
    while(num != 0) {
        remainder = num % 10;      // Get last digit
        if(remainder % 2 != 0) {   // Check if odd
            product *= remainder;   // Multiply to product
            hasOdd = 1;             // Mark that we found an odd digit
        }
        num /= 10;                  // Remove last digit
    }

    if(hasOdd) {
        printf("Product of odd digits of %d = %lld\n", original, product);
    } else {
        printf("No odd digits in %d\n", original);
    }

    return 0;
}
