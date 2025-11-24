//Find the digit that occurs the most times in an integer number
#include <stdio.h>

int main() {
    long num;
    int count[10] = {0}; // Array to store frequency of digits
    int maxCount = 0, maxDigit = 0;

    // Input number
    printf("Enter an integer number: ");
    scanf("%ld", &num);

    // Handle negative numbers
    if(num < 0) num = -num;

    // Count frequency of each digit
    while(num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find the digit with maximum frequency
    for(int i = 0; i < 10; i++) {
        if(count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit %d occurs the most (%d times)\n", maxDigit, maxCount);

    return 0;
}
