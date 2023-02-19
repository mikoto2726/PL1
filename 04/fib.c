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
    for (unsigned int i = 2; i <= n; i++){  // 配列fは、2つの要素しか持っていないため、iが偶数の場合と奇数の場合で、使用する要素が切り替わります。具体的には、 f[i % 2] は、iが偶数の場合には f[0] に、iが奇数の場合には f[1] に対応します。これにより、i番目のフィボナッチ数を計算するために必要な2つの要素を常に更新することができます。
        f[i % 2] = f[(i-1) % 2] + f[(i-2) % 2];
    }
    return f[n % 2];
}

int main(){
    printf("fib(40) = %u\n", fib(40))
    return 0;
}





*/