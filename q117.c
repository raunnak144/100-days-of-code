//Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include <stdio.h>

int main() {
    int m, n;
    int a[1000], b[1000], c[2000];
    int i = 0, j = 0, k = 0;

    scanf("%d", &m);
    for (int x = 0; x < m; x++)
        scanf("%d", &a[x]);

    scanf("%d", &n);
    for (int x = 0; x < n; x++)
        scanf("%d", &b[x]);

    while (i < m && j < n) {
        if (a[i] <= b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < m)
        c[k++] = a[i++];

    while (j < n)
        c[k++] = b[j++];

    for (int x = 0; x < k; x++) {
        printf("%d", c[x]);
        if (x != k - 1) printf(" ");
    }

    return 0;
}
