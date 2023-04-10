#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* mystrdup(const char* s){
    size_t size = strlen(s) + 1; //NUL文字分を含む必要バイト数を計算
    char *t = (char*)malloc(size);
    return strcpy(t, s);
}

int main(){
    char *orig = "INIAD", *copy;
    copy = mystrdup(orig);
    copy[0] = 'i';
    printf("orig = %s, copy = %s\n", orig, copy);
    free(copy);
    return 0;
}