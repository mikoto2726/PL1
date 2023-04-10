#include <stdio.h>
#include <string.h>

int main(){
    char buf[12];
    strncpy(buf, "INIAD is wonderful!", sizeof(buf));
    if (buf[sizeof(buf)-1] == '\0')
        printf("buf = %s\n", buf);
    else {
        buf[sizeof(buf)-1] = '\0';
        printf("buf = %s (partial)\n", buf);
    }
    return 0;
}