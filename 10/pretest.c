#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: ./rep <string> <count>\n");
        return 1;
    }

    char *str = argv[1];
    int count = atoi(argv[2]);

    for (int i = 0; i < count; i++) {
        printf("%s\n", str);
    }

    return 0;
}
