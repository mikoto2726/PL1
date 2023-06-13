#include <stdio.h>

void createPyramid(int height, const char* filename) {
    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        printf("ファイルを作成できませんでした。\n");
        return;
    }

    int row, space, hash;

    for (row = 1; row <= height; row++) {
        
        for (space = 1; space <= height - row; space++) {
            fprintf(file, " ");
        }

        
        for (hash = 1; hash <= 2 * row - 1; hash++) {
            fprintf(file, "#");
        }

        fprintf(file, "\n");
    }

    fclose(file);
    printf("ピラミッドを %s に出力しました。\n", filename);
}

int main() {
    int height = 5;
    const char* filename = "pyramid.txt";

    createPyramid(height, filename);

    return 0;
}
