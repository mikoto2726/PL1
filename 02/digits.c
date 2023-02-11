#include <stdio.h>

int main(){
    int x, num = 1;
    printf("X = ");
    scanf("%d", &x);
    for (; x >= 10; num++){
        x = x / 10;
    }
    printf("The number of digits of X is %d\n", num);
}