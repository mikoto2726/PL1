#include <stdio.h>


int find_even(int *a, int len) {
    for (int i = 0; i < len; i++) {
        if (*(a + i) % 2 == 0) {
            return 1; // 偶数があった場合は1を返す
        }
    }
    return 0; // 偶数がなかった場合は0を返す
}

int main(){
    int x[] = {1, 3, 5, 7};
    int y[] = {1, 3, 6, 9};

    printf("even elements in x? %s\n", 
        (find_even(x, 4) ? "yes" : "no"));
    printf("even elements in y? %s\n", 
        (find_even(y, 4) ? "yes" : "no"));
    return 0;
}
