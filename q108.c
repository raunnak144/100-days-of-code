// Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include <stdio.h>

int main() {
    int n, nums[1000], left[1000], right[1000], ans[1000];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    left[0] = 1;
    for (int i = 1; i < n; i++)
        left[i] = left[i-1] * nums[i-1];

    right[n-1] = 1;
    for (int i = n-2; i >= 0; i--)
        right[i] = right[i+1] * nums[i+1];

    for (int i = 0; i < n; i++)
        ans[i] = left[i] * right[i];

    for (int i = 0; i < n; i++) {
        printf("%d", ans[i]);
        if (i != n-1) printf(" ");
    }

    return 0;
}
