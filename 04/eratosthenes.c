#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n = 1000;

    // Allocate memory for the sieve array
    int *sieve = (int*) calloc(n + 1, sizeof(int)); //callocは動的メモリ確保する関数　n+1個の整数を格納するためのメモリを割り当てている。各要素のサイズはsizeof(int)
    if (sieve == NULL) {
        printf("Error: memory allocation failed\n"); //メモリを確保できなければエラーを出す
        exit(EXIT_FAILURE);
    }

    // Mark all numbers as potential primes
    for (int i = 2; i <= n; i++) { //一度すべての数字を素数とみなす
        sieve[i] = 1; //素数の場合は1、合成数の場合は0
    }

    // Apply the sieve
    for (int i = 2; i <= sqrt(n); i++) {
        if (sieve[i]) { //sieve[i] == 1ならば
            for (int j = i * i; j <= n; j += i) {
                sieve[j] = 0; //素数のi倍は合成数なので0にする
            }
        }
    }

    // Print the prime numbers
    printf("The prime numbers up to %d are:\n", n);
    for (int i = 2; i <= n; i++) {
        if (sieve[i]) { //1(素数)なら出力する
            printf("%d\n", i);
        }
    }

    // Free the memory allocated for the sieve array
    free(sieve);
    return 0;
}
