//Toggle case of each character in a string.
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer than gets()

    // Toggle case
    while (str[i] != '\0' && str[i] != '\n') {  // ignore newline
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');  // lowercase → uppercase
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');  // uppercase → lowercase
        }
        i++;
    }

    // Display result
    printf("Toggled string: %s\n", str);

    return 0;
} 
 