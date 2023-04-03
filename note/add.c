#include <stdio.h>

int add(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int main(){
    int (*func)(int, int);
    func = add;
    printf("%d\n", func(10, 20));
    func = sub;
    printf("%d\n", func(10, 20));
    return 0;
}