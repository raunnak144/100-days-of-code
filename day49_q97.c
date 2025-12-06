//Print the initials of a name.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    fgets(str, 100, stdin);

    if (str[0] != ' ')
        printf("%c", str[0]);

    for (i = 1; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')
            printf("%c", str[i+1]);
    }

    return 0;
}
