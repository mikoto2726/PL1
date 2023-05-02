#include <stdio.h>
#include <unistd.h>

void progress(int v){
    int i;
    printf("Progress: [%3d%%] [", v * 5);
    for (i = 0; i < v; i++) putchar('#');
    for (; i < 20; i++) putchar('.');
    printf("]\r");
    fflush(stdout);
}

int main(){
    for (int i = 0; i < 20; i++){
        progress(i);
        sleep(1);
    }
    fputs("\nFinished!\n", stdout);
    return 0;
}
