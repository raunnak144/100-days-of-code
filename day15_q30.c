//Write a program to reverse a given number.
#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number
    while(num != 0) {
        remainder = num % 10;          // Get the last digit
        reversed = reversed * 10 + remainder; // Append it to reversed
        num /= 10;                     // Remove last digit from num
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}
