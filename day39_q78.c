//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main() {
    int matrix[10][10];
    int n, i, j, sum = 0;

    // Input size of the square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of main diagonal elements
    for (i = 0; i < n; i++) {
        sum += matrix[i][i];  // main diagonal elements have same row and column index
    }

    // Display the result
    printf("Sum of main diagonal elements is: %d\n", sum);

    return 0;
}
