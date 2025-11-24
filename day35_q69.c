//Find the second largest element in an array.
#include <stdio.h>

int main() {
    int arr[100], n, i;
    int first, second;

    // Input number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Check if array has at least two elements
    if (n < 2) {
        printf("Array should have at least two elements.\n");
        return 0;
    }

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize first and second
    first = second = -99999;  // assuming large negative number

    // Find first and second largest
    for (i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    // Check if second largest exists
    if (second == -99999) {
        printf("There is no second largest element (all elements are equal).\n");
    } else {
        printf("The second largest element is: %d\n", second);
    }

    return 0;
}
