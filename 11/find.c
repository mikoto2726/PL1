#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 26

int main(int argc, char *argv[])
{
    FILE *file;
    int c;
    int alphabet[SIZE] = {0};
    int index;

    if(argc != 2) {
        printf("Usage: find_unused <file>\n");
        return 1;
    }

    file = fopen(argv[1], "r");
    if(!file) {
        printf("File not found: %s\n", argv[1]);
        return 1;
    }

    while((c = fgetc(file)) != EOF) {
        if(c >= 'A' && c <= 'Z')
            alphabet[c - 'A'] = 1;
        else if(c >= 'a' && c <= 'z')
            alphabet[c - 'a'] = 1;
    }

    for(index = 0; index < SIZE; index++) {
        if(alphabet[index] == 0)
            printf("%c\n", index + 'A');  // display unused characters
    }

    fclose(file);
    return 0;
}
