#include <stdio.h>

int find_zero(int *a, int n){
    for (int i = 0; i < n; i++){
        if (a[i] == 0){
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr1[] = {1, 2, 3, 0, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("%d\n", find_zero(arr1, n1)); // 1
    printf("%d\n", find_zero(arr2, n2)); // 0
    return 0;
}