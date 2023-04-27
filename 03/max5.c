#include <stdio.h>

int max(int a, int b, int c, int d, int e, int *idx) {
    int max_val = a; //aが最大だと仮定する
    int max_idx = 1;
    
    if (b > max_val) {
        max_val = b;
        max_idx = 2;
    }
    if (c > max_val) {
        max_val = c;
        max_idx = 3;
    }
    if (d > max_val) {
        max_val = d;
        max_idx = 4;
    }
    if (e > max_val) {
        max_val = e;
        max_idx = 5;
    }
    
    if (idx != NULL) {
        *idx = max_idx;
    }

    
    return max_val;
}

int main() {
    int n = 0;
    int max_val = max(10, 30, 50, 40, 20, &n);
    if(n!=0){
        printf("%d  (n = %d)\n", max_val, n);
    }
    else{
        printf("%d\n", max_val);
    }
    return 0;
}

