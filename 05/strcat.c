#include <stdio.h>
#include <string.h>

char *my_strcat(char *to, const char *from){
    size_t i = strlen(to);
    strcpy(&to[i], from);
    return 0;
}

int main(){
    char s[20] = "INIAD", t[20] = "Toyo";
    strcat(s, "Toyo");
    my_strcat(t, "INIAD");
    printf("s = %s, t = %s\n", s, t);
    return 0;
}