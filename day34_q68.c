// Delete an element from an array.

#include <stdio.h>

int main() {
    int arr[100], n, i, pos;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the position to delete (1-based index)
    printf("Enter the position of the element to delete: ");
    scanf("%d", &pos);

    // Check if position is valid
    if (pos < 1 || pos > n) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to the left to fill the gap
        for (i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        n--; // reduce array size by 1

        // Display the new array
        printf("Array after deletion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
