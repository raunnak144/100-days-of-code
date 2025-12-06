//Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin, *fout;
    int ch;

    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error: input.txt not found.");
        return 0;
    }

    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Error creating output.txt.");
        fclose(fin);
        return 0;
    }

    while ((ch = fgetc(fin)) != EOF) {
        fputc(toupper(ch), fout);
    }

    fclose(fin);
    fclose(fout);

    printf("Conversion complete. Check output.txt");
    return 0;
}
