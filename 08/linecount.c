#include <stdio.h>

int main(){
    FILE* fp = fopen("sonnet.txt", "r");
    if (!fp){
        printf("ERROR: failed to open file\n");
        return 1;
    }
    char buf[128];
    int count = 0;
    while (fgets(buf, sizeof(buf),fp))
        count++;
    fclose(fp);
    printf("sonnet.txt contains %d lines\n",count);
    return 0;

}