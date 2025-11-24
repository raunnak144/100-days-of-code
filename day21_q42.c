//Write a program to check if a number is a perfect number.
#include <stdio.h>

int main() {
    int num, sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate sum of proper divisors
    for(int i = 1; i <= num / 2; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }

    // Check if perfect number
    if(sum == num) {
        printf("%d is a Perfect number.\n", num);
    } else {
        printf("%d is not a Perfect number.\n", num);
    }

    return 0;
}
