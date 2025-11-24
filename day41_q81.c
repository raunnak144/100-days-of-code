//Count characters in a string without using built-in length functions.
#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer than gets()

    // Count characters until null character '\0'
    while (str[count] != '\0' && str[count] != '\n') {  // ignore newline
        count++;
    }

    // Display the result
    printf("Number of characters in the string: %d\n", count);

    return 0;
}
