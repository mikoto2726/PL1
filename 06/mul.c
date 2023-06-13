#include <stdio.h>

typedef struct {
    int numer; // 分子
    int denom; // 分母
} fraction;

void fraction_print(const fraction* frac) {
    printf("%d/%d\n", frac->numer, frac->denom);
}

void fraction_mul(fraction* result, const fraction* frac1, const fraction* frac2) {
    result->numer = frac1->numer * frac2->numer;
    result->denom = frac1->denom * frac2->denom;
}

int main() {
    fraction a = {.numer = 7, .denom = 3};
    fraction b = {.numer = 2, .denom = 5};
    fraction result;
    fraction_mul(&result, &a, &b);
    fraction_print(&result);
    return 0;
}
