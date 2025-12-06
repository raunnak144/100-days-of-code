//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[100];
    int freq[26] = {0};

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];

        if (c >= 'a' && c <= 'z') {      // only lowercase check
            if (freq[c - 'a'] == 1) {    // appears again → repeating
                printf("First repeating lowercase letter: %c\n", c);
                return 0;
            }
            freq[c - 'a']++;
        }
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}
