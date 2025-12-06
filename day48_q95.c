//Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int main() {
    char s1[200], s2[200], temp[400];
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';
    if (strlen(s1) != strlen(s2)) {
        printf("Not rotation");
        return 0;
    }
    strcpy(temp, s1);
    strcat(temp, s1);
    if (strstr(temp, s2))
        printf("Rotation");
    else
        printf("Not rotation");
    return 0;
}
