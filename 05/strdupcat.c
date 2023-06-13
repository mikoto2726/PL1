#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *strdupcat(const char *s, const char *t){
    /*
    int n = strlen(a);
    char *c;
    strcpy(&c[n], b);
    return c;
    */
    int n = strlen(s) + strlen(t) + 1;
    char* c = malloc(n * sizeof(char));

    if (c != NULL) {
        strcpy(c, s);
        strcpy(&c[strlen(s)], t);
    }

    return c;
    
}

int main(){
    char* s = strdupcat("INIAD", "Toyo");
    s[5]='Y';
    printf("%s\n", s);
    free(s);
    return 0;
}