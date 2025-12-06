//Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[100000];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max_so_far = arr[0];
    int curr = arr[0];

    for (int i = 1; i < n; i++) {
        if (curr < 0)
            curr = arr[i];
        else
            curr += arr[i];

        if (curr > max_so_far)
            max_so_far = curr;
    }

    printf("%d", max_so_far);
    return 0;
}
