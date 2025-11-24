//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols, i, j, distinct = 1;

    // Input number of rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Matrix must be square for diagonal check
    if (rows != cols) {
        printf("Matrix must be square to check diagonal elements.\n");
        return 0;
    }

    // Input elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check diagonal elements for distinctness
    for (i = 0; i < rows; i++) {
        for (j = i + 1; j < rows; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0; // Found duplicate
                break;
            }
        }
        if (!distinct) break;
    }

    // Display result
    if (distinct) {
        printf("All diagonal elements are distinct.\n");
    } else {
        printf("Diagonal elements are not distinct.\n");
    }

    return 0;
}
