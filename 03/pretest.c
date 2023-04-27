#include <stdio.h>

int sigma(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int result = sigma(5);
    printf("%d\n", result);
    return 0;
}
