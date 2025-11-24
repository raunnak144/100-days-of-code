//Count spaces, digits, and special characters in a string.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int spaces = 0, digits = 0, special = 0;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer than gets()

    // Count spaces, digits, and special characters
    while (str[i] != '\0' && str[i] != '\n') {  // ignore newline
        char ch = str[i];

        if (ch >= '0' && ch <= '9') {
            digits++;
        } else if (ch == ' ') {
            spaces++;
        } else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // do nothing, it's a letter
        } else {
            special++;  // any other character
        }

        i++;
    }

    // Display results
    printf("Number of spaces: %d\n", spaces);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", special);

    return 0;
}
