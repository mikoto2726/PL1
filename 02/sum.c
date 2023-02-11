#include <stdio.h>

int main(){
    int n, i, result;
    printf("n= ");
    scanf("%d", &n);
    result = 0;
    for (i = 1; i <= n; i++){
        result += i;
    }
    printf("sigma(n) = %d\n", result);
    return 0;
}