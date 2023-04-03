#include <stdio.h>

void add_vector(int *a, int *b, int *c) {
    c[0] = a[0] + b[0];
    c[1] = a[1] + b[1];
    c[2] = a[2] + b[2];
}

int main() {
    int a[3] = {1, -2, 3};
    int b[3] = {-3, 4, 5};
    int c[3];
    add_vector(a, b, c);
    printf("(%d, %d, %d)\n", c[0], c[1], c[2]);
    return 0;
}
