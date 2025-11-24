//Find the sum of all elements in a matrix.
#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols, i, j, sum = 0;

    // Input number of rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of all elements
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }

    // Display the result
    printf("\nThe sum of all elements in the matrix is: %d\n", sum);

    return 0;
}
