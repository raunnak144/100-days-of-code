//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
#include <string.h>

int main() {
    char binary[65]; // Max 64-bit binary number

    // Input binary number as a string
    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Calculate 1's complement
    for(int i = 0; i < strlen(binary); i++) {
        if(binary[i] == '0') {
            binary[i] = '1';
        } else if(binary[i] == '1') {
            binary[i] = '0';
        } else {
            printf("Invalid input! Not a binary number.\n");
            return 1;
        }
    }

    // Print 1's complement
    printf("1's complement = %s\n", binary);

    return 0;
}
