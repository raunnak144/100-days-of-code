//Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
#include <stdio.h>

int main() {
    int n, k;
    if (scanf("%d", &n) != 1) return 0;
    int arr[100000];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    if (scanf("%d", &k) != 1) return 0;
    if (k > n || k <= 0) return 0;

    int dq[100000]; // will store indices, acts as deque
    int front = 0, back = -1;

    for (int i = 0; i < k; i++) {
        while (back >= front && arr[dq[back]] <= arr[i]) back--;
        dq[++back] = i;
    }

    for (int i = k; i < n; i++) {
        printf("%d ", arr[dq[front]]);
        if (dq[front] <= i - k) front++;
        while (back >= front && arr[dq[back]] <= arr[i]) back--;
        dq[++back] = i;
    }

    printf("%d", arr[dq[front]]);
    return 0;
}
