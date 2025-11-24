//Write a program to print the following pattern:
//*
//**
//***
//****
//*****
#include <stdio.h>

int main() {
    int i, j;
    int rows = 5;

    // Loop through rows
    for(i = 1; i <= rows; i++) {
        // Loop to print stars in each row
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Move to next row
    }

    return 0;
}
