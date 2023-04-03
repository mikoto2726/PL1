#include <stdio.h>
#include <string.h>

char *my_strcpy(char *to, const char* from){
    size_t i;
    for (i = 0; from[i] != '\0'; i++){
        to[i] = from[i];
    }
    to[i] = '\0';
    return to;
}

int main(){
    char s[20], t[20];
    strcpy(s, "INIAD");
    my_strcpy(t, "Toyo");
    printf("s = %s, t = %s\n", s, t);
    return 0;
}