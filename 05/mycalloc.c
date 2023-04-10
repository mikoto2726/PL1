#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void* mycalloc(size_t cnt, size_t n){
    size_t size = cnt * n;
    void *p = malloc(size);
    if (p) memset(p, 0, size);
    return p;
}

int main(){
    char *s = (char*)mycalloc(10, sizeof(char));
    memcpy(s, "INIAD", 5);
    printf("s = %s\n, s");
    return 0;
}