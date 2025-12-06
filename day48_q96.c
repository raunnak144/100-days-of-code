// Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

void reverse(char s[], int start, int end) {
    while (start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i = 0, start = 0;

    fgets(str, 200, stdin);

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\n') {
            reverse(str, start, i - 1);
            start = i + 1;
        }
        i++;
    }

    printf("%s", str);
    return 0;
}
