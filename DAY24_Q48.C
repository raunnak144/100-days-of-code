//Write a program to print the following pattern:
//1
//12
//123
//1234
//12345
#include <stdio.h>

int main() {
    int i, j;
    int rows = 5;

    // Loop through rows
    for(i = 1; i <= rows; i++) {
        // Loop to print numbers in each row
        for(j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to next row
    }

    return 0;
}

