#include <stdio.h>

int swap(int x, int y, double *p, double *q){
    *p = y;
    *q = x; 
    return 0;
}

int main(){
    double x = 1.0, y = 2.0;
    swap(x, y, &x, &y);
    printf("x = %lf, y = %lf\n", x, y);
    return 0;
}