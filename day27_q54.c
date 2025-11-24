//Write a program to print the following pattern:
//*
  //***
 //*****
//*******
 //*****
  //***
  //*
  #include <stdio.h>

int main() {
    int i, j;
    int rows = 4; // Number of rows for top half (including middle row)

    // Top half of the pattern
    for(i = 1; i <= rows; i++) {
        // Print spaces
        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars (2*i - 1)
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half of the pattern
    for(i = rows - 1; i >= 1; i--) {
        // Print spaces
        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print stars (2*i - 1)
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
