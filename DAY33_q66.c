//Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

int main() {
    int arr[100], n, i, num, pos;

    // Input the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input elements in sorted order
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to insert
    printf("Enter the element to insert: ");
    scanf("%d", &num);

    // Find the position where the element should be inserted
    pos = n; // assume last position
    for (i = 0; i < n; i++) {
        if (num < arr[i]) {
            pos = i;
            break;
        }
    }

    // Shift elements to the right to make space
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[pos] = num;
    n++;

    // Display the updated array
    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
