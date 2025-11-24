//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swapped;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10; // Last digit

    // Count number of digits
    digits = (int)log10(num); // digits - 1
    first = num / pow(10, digits); // First digit

    // Swap first and last digit
    swapped = last * pow(10, digits) + (num % (int)pow(10, digits) - last) + first;

    printf("Number after swapping first and last digit = %d\n", swapped);

    return 0;
}
