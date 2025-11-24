//Write a program to print numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i;

    // Input the value of n
    printf("Enter a number: ");
    scanf("%d", &n);

    // Print numbers from 1 to n
    for(i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
