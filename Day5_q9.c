// Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>   // Required for pow() function

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    // Simple Interest formula: SI = (P * R * T) / 100
    simpleInterest = (principal * rate * time) / 100;

    // Compound Interest formula: CI = P * (1 + R/100)^T - P
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    printf("Simple Interest: %.2f\n", simpleInterest);
    printf("Compound Interest: %.2f\n", compoundInterest);

    return 0;
}
