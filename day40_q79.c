//Perform diagonal traversal of a matrix.
#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, cols, i, j;

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

    printf("\nDiagonal Traversal of the Matrix:\n");

    // Traverse diagonals starting from the first row
    for (int d = 0; d < cols; d++) {
        i = 0;
        j = d;
        while (i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    // Traverse diagonals starting from the first column (excluding first element)
    for (int d = 1; d < rows; d++) {
        i = d;
        j = cols - 1;
        while (i < rows && j >= 0) {
            printf("%d ", matrix[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}
