#include <stdio.h>
unsigned int fib(unsigned int N){
    if (N < 2) return N;    
    unsigned int F[N+1];
    F[0] = 0; F[1] = 1;
    for (unsigned int i = 2; i < N; i++){
        F[i] = F[i-1] + F[i-2];
    }
    return F[N];
}
int main(){
    printf("fib(40) = %u\n", fib(40));
    return 0;
}

/*別解
#include <stdio.h>
unsigneed int fib(unsigned int n){
    unsigned int f[2] = {0, 1};
    for (unsigned int i = 2; i <= n; i++){
        f[i % 2] = f[(i-1) % 2] + f[(i-2) % 2];
    }
    return f[n % 2];
}

int main(){
    printf("fib(40) = %u\n", fib(40))
    return 0;
}





*/