//Write a program to check if a number is prime.
#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 1) {
        isPrime = 0; // Numbers <= 1 are not prime
    } else {
        // Check for factors
        for(i = 2; i * i <= num; i++) { // Only check up to sqrt(num)
            if(num % i == 0) {
                isPrime = 0; // Not prime
                break;
            }
        }
    }

    // Output result
    if(isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
