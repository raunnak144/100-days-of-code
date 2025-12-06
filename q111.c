//Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
#include <stdio.h>

int main() {
    int n, k;
    if (scanf("%d", &n) != 1) return 0;
    int arr[100000];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    if (scanf("%d", &k) != 1) return 0;
    if (k > n || k <= 0) return 0;

    int dq[100000]; // store indices of negative numbers
    int front = 0, back = -1;

    for (int i = 0; i < k; i++)
        if (arr[i] < 0) dq[++back] = i;

    for (int i = k; i < n; i++) {
        if (front <= back)
            printf("%d ", arr[dq[front]]);
        else
            printf("0 ");

        if (front <= back && dq[front] <= i - k) front++;
        if (arr[i] < 0) dq[++back] = i;
    }

    if (front <= back) printf("%d\n", arr[dq[front]]);
    else printf("0\n");

    return 0;
}
