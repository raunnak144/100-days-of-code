//Count frequency of a given character in a string.
#include <stdio.h>

int main() {
    char str[100], ch;
    int i = 0, count = 0;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer than gets()

    // Input the character to search
    printf("Enter the character to count: ");
    scanf("%c", &ch);

    // Count frequency of the character
    while (str[i] != '\0' && str[i] != '\n') {  // ignore newline
        if (str[i] == ch) {
            count++;
        }
        i++;
    }

    // Display result
    printf("The character '%c' appears %d times in the string.\n", ch, count);

    return 0;
}
