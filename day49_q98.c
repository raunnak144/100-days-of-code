#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0, last = 0;

    fgets(str, 100, stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')
            last = i + 1;
    }

    printf("%c", str[0]);

    for (i = 1; str[i] != '\0'; i++) {
        if (str[i] == ' ' && i + 1 != last)
            printf("%c", str[i+1]);
    }

    printf(" %s", &str[last]);

    return 0;
}
