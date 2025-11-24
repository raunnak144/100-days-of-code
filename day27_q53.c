//Write a program to print the following pattern:
//*
//***
///*****
//*******
//*********
//*******
//*****
//***
//*
#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; // Number of rows in the top half (odd numbers)

    // Top half of the pattern
    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= 2*i - 1; j++) { // Print odd number of stars
            printf("*");
        }
        printf("\n");
    }

    // Bottom half of the pattern
    for(i = rows - 1; i >= 1; i--) {
        for(j = 1; j <= 2*i - 1; j++) { // Print odd number of stars
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
