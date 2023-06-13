#include <stdio.h>
void round100(unsigned int *p) {
    // 参照先の値を100で割った商を求める
    unsigned int quotient = *p / 100;
    // 参照先の値を100で割った余りを求める
    unsigned int remainder = *p % 100;
    // 余りが50以上なら商を1増やす
    if (remainder >= 50) {
        quotient++;
    }
    // 参照先の値を更新する
    *p = quotient * 100;
}


int main() {
    unsigned int num = 2367;
    printf("num = %u\n", num); // num = 2367
    round100(&num);
    printf("num = %u\n", num); // num = 2400
    return 0;
}

