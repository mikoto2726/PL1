#include <stdio.h>

int main (int argc, char* argv[]){
    char buf[128]; int line_count = 0;
    if (argc != 2){
        fprintf(stderr, "Usage:%s <file>\n", argv[0]); return 1;
    }
    FILE* fp = fopen(argv[1], "r");
    if (!fp){
        perror("fopen"); return 1;
    }
    while (fgets(buf, sizeof(buf), fp))
        line_count++;
    fclose(fp);
    printf("%s contains %d lines\n", argv[1], line_count);
    return 0;
}