#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 1000
#define MAX_LINE_LENGTH 1024

void shuffle(void* arr, size_t size, size_t n) {
    char* array = arr;
    for (size_t i = n - 1; i > 0; i--) {
        size_t j = rand() % (i + 1);
        char temp[size];
        memcpy(temp, array + (i * size), size);
        memcpy(array + (i * size), array + (j * size), size);
        memcpy(array + (j * size), temp, size);
    }
}

int main(int argc, char** argv) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s FILE\n", argv[0]);
        return EXIT_FAILURE;
    }

    char lines[MAX_LINES][MAX_LINE_LENGTH];
    size_t num_lines = 0;

    FILE* file = fopen(argv[1], "r");
    if (file == NULL) {
        perror(argv[1]);
        return EXIT_FAILURE;
    }

    while (num_lines < MAX_LINES && fgets(lines[num_lines], MAX_LINE_LENGTH, file) != NULL) {
        num_lines++;
    }
    fclose(file);

    shuffle(lines, MAX_LINE_LENGTH, num_lines);

    for (size_t i = 0; i < num_lines; i++) {
        printf("%s", lines[i]);
    }

    return EXIT_SUCCESS;
}