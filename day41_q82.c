//Print each character of a string on a new line.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer than gets()

    // Print each character on a new line
    while (str[i] != '\0' && str[i] != '\n') {  // ignore newline
        printf("%c\n", str[i]);
        i++;
    }

    return 0;
}
