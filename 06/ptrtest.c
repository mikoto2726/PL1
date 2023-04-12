#include <stdio.h>

int main(){
    int i = 10;
    int *pi = &i;
    int **ppi = &pi;

    printf("i = %d\n", i);
    printf("&i = %p\n", &i);
    printf("*pi = %d\n", *pi);
    printf("pi = %p\n", pi);
    printf("&pi = %p\n", &pi);
    printf("**ppi = %d\n", **ppi);
    printf("*ppi = %p\n", *ppi);
    printf("ppi = %p\n", ppi);
    printf("&ppi = %p\n", ppi);
    return 0;
}