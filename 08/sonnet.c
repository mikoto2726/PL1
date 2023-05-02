#include <stdio.h>

int main(){
    const char* lines[] = {
        "Shall I compare thee to a summer's day?",
        "Thou art more lovely and more temperate:",
        "Rough winds do shake the darling buds of May;",
        "And summer's lease hath all too short a date:",
    };
    int i;

    FILE* fp = fopen("sonnet.txt", "w");
    if (!fp){
        printf("ERROR: failed to open file\n");
        return 1;
    }
    for (i = 0; i < sizeof(lines)/sizeof(lines[0]);i++)
        fprintf(fp, "%s\n", lines[i]);
    fclose(fp);
    return 0;
}