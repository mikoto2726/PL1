#include <stdio.h>
#include <stdio.h>

int main(){
    time_t now;
    char s[100];

    time(&now);
    
    printf("Current Time: %s", ctime_r(&now, s));
    return 0;
}