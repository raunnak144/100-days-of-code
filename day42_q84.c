//Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Input the string
    printf("Enter a string in lowercase: ");
    fgets(str, sizeof(str), stdin);  // safer than gets()

    // Convert to uppercase
    while (str[i] != '\0' && str[i] != '\n') {  // ignore newline
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');  // ASCII conversion
        }
        i++;
    }

    // Display result
    printf("Uppercase string: %s\n", str);

    return 0;
}
