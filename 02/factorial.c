#include <stdio.h>

int factorial(int n){
    unsigned long long int y = 1;
    for (int i = 1; i <= n; i++){
        y *= i;
    }
    return y;
}

int main(){
    int i = 0;
    for (i = 1; i <= 50; i++){
        printf("%d! = %d\n", i, factorial(i));
    }
    return 0;
}