//Write a program to print the following pattern:
//*****
 //****
  ///***
  // **
    //*
    #include <stdio.h>

int main() {
    int i, j;
    int rows = 5;

    // Loop through rows
    for(i = 0; i < rows; i++) {
        // Print spaces
        for(j = 0; j < i; j++) {
            printf(" ");
        }
        // Print stars
        for(j = 0; j < rows - i; j++) {
            printf("*");
        }
        printf("\n"); // Move to next row
    }

    return 0;
}
