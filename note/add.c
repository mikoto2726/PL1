/*整数を2つ引数に取り、その和を返す関数addと差を返す関数subを定義し、
関数ポインタを用いてそれぞれの関数を呼び出して、結果を表示するプログラムを作成してください。*/

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