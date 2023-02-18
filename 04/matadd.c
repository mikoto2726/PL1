#include <stdio.h>
int main(){
    int X[2][2];
    int A[][2] = { // なんで1個目空欄なんだ？2じゃないのか？
        {1 ,2},
        {3, 4},
    };
    int B[][2] = { 
        {5, -6},
        {-7, 8},
    };
    int i, j;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++)
        X[i][j] = A[i][j] + B[i][j];
    }
    /*結果*/
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++)
            printf("\t%d", X[i][j]);
        printf("\n");
    }
    return 0;
}