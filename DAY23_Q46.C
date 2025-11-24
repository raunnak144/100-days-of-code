//Write a program to print the following pattern:
//*****
//*****
//*****
//*****
//*****
#include <stdio.h>

int main() {
    int i, j;
    int rows = 5, cols = 5; // 5x5 pattern

    // Loop through rows
    for(i = 1; i <= rows; i++) {
        // Loop through columns
        for(j = 1; j <= cols; j++) {
            printf("*");
        }
        printf("\n"); // Move to next row
    }

    return 0;
}
