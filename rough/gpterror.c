#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    file = fopen("example.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    while (!feof(file)) {
        ch = fgetc(file);
        if (ch != EOF) {
            printf("%c", ch);
        }
    }

    fclose(file);
    return 0;
}
