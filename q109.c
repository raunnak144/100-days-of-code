// Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k

#include <stdio.h>
#include <limits.h>

int main() {
    int n, k;
    if (scanf("%d", &n) != 1) return 0;
    long long arr[100000];
    for (int i = 0; i < n; i++) scanf("%lld", &arr[i]);
    scanf("%d", &k);
    if (k > n || k <= 0) { printf("0"); return 0; }

    long long sum = 0, maxsum = LLONG_MIN;
    for (int i = 0; i < k; i++) sum += arr[i];
    maxsum = sum;

    for (int i = k; i < n; i++) {
        sum += arr[i];
        sum -= arr[i - k];
        if (sum > maxsum) maxsum = sum;
    }

    printf("%lld", maxsum);
    return 0;
}
