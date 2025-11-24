//Replace spaces with hyphens in a string.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer than gets()

    // Replace spaces with hyphens
    while (str[i] != '\0' && str[i] != '\n') {  // ignore newline
        if (str[i] == ' ') {
            str[i] = '-';
        }
        i++;
    }

    // Display the result
    printf("Modified string: %s\n", str);

    return 0;
}
