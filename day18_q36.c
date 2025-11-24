//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main() {
    int a, b, i, hcf = 1;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Find HCF using loop
    for(i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0) {
            hcf = i; // Update hcf if i divides both a and b
        }
    }

    printf("HCF of %d and %d = %d\n", a, b, hcf);

    return 0;
}
