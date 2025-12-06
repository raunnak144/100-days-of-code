//Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    fgets(s, 1000, stdin);

    int i = 0;

    while (s[i] == ' ') i++;      // skip leading spaces

    if (s[i] != '\0')
        s[i] = toupper(s[i]);     // first letter uppercase

    for (i = i + 1; s[i] != '\0'; i++)
        s[i] = tolower(s[i]);     // rest lowercase

    printf("%s", s);
    return 0;
}
