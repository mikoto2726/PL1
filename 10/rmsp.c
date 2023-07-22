#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: ./rmsp <file_path>\n");
        exit(1);
    }

    const char *file_path = argv[1];
    FILE *file = fopen(file_path, "r");

    if (file == NULL) {
        perror("Error opening file");
        exit(1);
    }

    char line[1024];
    while (fgets(line, sizeof(line), file)) {
        if (strlen(line) > 1 && line[0] != '\n') {
            printf("%s", line);
        }
    }

    if (fclose(file) != 0) {
        perror("Error closing file");
        exit(1);
    }

    return 0;
}