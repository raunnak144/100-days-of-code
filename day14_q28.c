//Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i;
    long long product = 1; // Use long long for larger products

    // Input the value of n
    printf("Enter a number: ");
    scanf("%d", &n);

    // Calculate product of even numbers from 1 to n
    for(i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("Product of even numbers from 1 to %d = %lld\n", n, product);

    return 0;
}
