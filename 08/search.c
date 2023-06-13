#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp = fopen("search.c", "r");
    if (!fp) {
        fprintf(stderr, "ERROR: failed to open file\n");
        return 1;
    }

    char buf[128];
    int line = 0;
    while (fgets(buf, sizeof(buf), fp)) {
        line++; 
        if (strstr(buf, "int"))
            printf("%d:%s", line, buf);
    }
    
    fclose(fp);
    return 0;
}
