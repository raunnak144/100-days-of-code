//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>

int main() {
    char src[100], dest[100];
    FILE *fs, *fd;
    int ch;

    printf("Enter source filename: ");
    scanf("%s", src);

    printf("Enter destination filename: ");
    scanf("%s", dest);

    fs = fopen(src, "r");
    if (fs == NULL) {
        printf("Error opening source file.");
        return 0;
    }

    fd = fopen(dest, "w");
    if (fd == NULL) {
        printf("Error creating destination file.");
        fclose(fs);
        return 0;
    }

    while ((ch = fgetc(fs)) != EOF) {
        fputc(ch, fd);
    }

    fclose(fs);
    fclose(fd);

    printf("File copied successfully.");

    return 0;
}
