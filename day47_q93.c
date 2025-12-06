//Check if two strings are anagrams of each other.

#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int freq[26] = {0};

    fgets(s1, 100, stdin);
    fgets(s2, 100, stdin);

    for (int i = 0; s1[i] != '\0'; i++) {
        if (s1[i] >= 'a' && s1[i] <= 'z')
            freq[s1[i] - 'a']++;
        else if (s1[i] >= 'A' && s1[i] <= 'Z')
            freq[s1[i] - 'A']++;
    }

    for (int i = 0; s2[i] != '\0'; i++) {
        if (s2[i] >= 'a' && s2[i] <= 'z')
            freq[s2[i] - 'a']--;
        else if (s2[i] >= 'A' && s2[i] <= 'Z')
            freq[s2[i] - 'A']--;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}
