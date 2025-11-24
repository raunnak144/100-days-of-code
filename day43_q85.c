//Reverse a string.
#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i;
    
    // Input the string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // safer than gets()

    // Calculate length manually (ignore newline)
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Reverse the string
    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}
