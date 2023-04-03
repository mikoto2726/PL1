#include <stdio.h>
#include <string.h>

size_t my_strlen(const char *s){
    size_t i;
    for (i = 0; s[i] != '\0'; i++)
        ; //何もしない
        return i;
}
int main(){
    const char *iniad = "INIAD Toyo";
    printf("strlen(iniad) = %lu\n", strlen(iniad));
    printf("my_strlen(iniad) = %lu\n", my_strlen(iniad));
    return 0;
}