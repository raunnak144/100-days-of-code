//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int num, i;
    int binary[32]; // Array to store binary digits
    int index = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num == 0) {
        printf("Binary representation = 0\n");
    } else {
        int temp = num;
        // Convert to binary
        while(temp > 0) {
            binary[index] = temp % 2; // Store remainder
            temp /= 2;                // Divide by 2
            index++;
        }

        printf("Binary representation of %d = ", num);
        // Print binary in reverse order
        for(i = index - 1; i >= 0; i--) {
            printf("%d", binary[i]);
        }
        printf("\n");
    }

    return 0;
}
