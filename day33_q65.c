//Search in a sorted array using binary search.
#include <stdio.h>

int main() {
    int n, key, left, right, mid, found = 0;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in sorted order:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    left = 0;
    right = n - 1;

    // Binary search
    while(left <= right) {
        mid = left + (right - left) / 2;

        if(arr[mid] == key) {
            printf("Element %d found at position %d\n", key, mid + 1);
            found = 1;
            break;
        }
        else if(arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }

    if(!found) {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
