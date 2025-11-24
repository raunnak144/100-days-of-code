// Write a program to find the LCM of two numbers.
#include <stdio.h>

int main() {
    int a, b, hcf = 1, i, lcm;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Find HCF first
    for(i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    // Calculate LCM
    lcm = (a * b) / hcf;

    printf("LCM of %d and %d = %d\n", a, b, lcm);

    return 0;
}
