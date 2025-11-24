//Check if a matrix is symmetric.
#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols, i, j, isSymmetric = 1;

    // Input number of rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // A matrix must be square to be symmetric
    if (rows != cols) {
        printf("Matrix must be square to check symmetry.\n");
        return 0;
    }

    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check for symmetry
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; // Not symmetric
                break;
            }
        }
        if (!isSymmetric) break;
    }

    // Display result
    if (isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
