//Count positive, negative, and zero elements in an array.
#include <stdio.h>

int main() {
    int n;
    int posCount = 0, negCount = 0, zeroCount = 0;

    // Input size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Input elements of the array
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count positive, negative, and zero elements
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0)
            posCount++;
        else if(arr[i] < 0)
            negCount++;
        else
            zeroCount++;
    }

    printf("Number of positive elements = %d\n", posCount);
    printf("Number of negative elements = %d\n", negCount);
    printf("Number of zeros = %d\n", zeroCount);

    return 0;
}
