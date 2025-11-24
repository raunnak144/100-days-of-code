//Write a program to print the following pattern:
    //5
   //45
  //345
 //2345
//12345
#include <stdio.h>

int main() {
    int i, j;
    int rows = 5;

    // Loop through rows
    for(i = 1; i <= rows; i++) {
        // Print leading spaces
        for(j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print numbers
        for(j = rows - i + 1; j <= rows; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to next row
    }

    return 0;
}

