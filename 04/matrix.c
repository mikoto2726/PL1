#include <stdio.h>

void add_matrix(int X[2][2], const int A[2][2], const int B[2][2]){
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++)
        X[i][j] = A[i][j] + B[i][j];
    }
}

int main(){
    int X[2][2], i , j;
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, -6}, {-7, 8}};
    add_matrix(X, A, B);
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++)
            printf("\t%d", X[i][j]);
        printf("\n");
    }
    return 0;
}