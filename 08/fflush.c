#include <stdio.h>
#include <unistd.h>

int main(){
    for (int i = 0; i < 20; i++){
        sleep(1);
        putchar('*');
        fflush(stdout);
    }
    putchar('\n');
    return 0;
}