/*qsort関数を使って、整数の配列を昇順にソートするプログラムを作成してください。ただし、qsort関数の第2引数には、比較関数を指定する必要があります。
この比較関数を関数ポインタで指定する方法を調べ、実際に関数ポインタを使ってソートするプログラムを作成してください。*/

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}

int main(){
    int arr[] = {5, 3, 8, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    qsort(arr, n, sizeof(int), compare);
    for (int i = 0; i < n; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}