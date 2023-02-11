#include <stdio.h>


int JST_to_EST(int jst){
        int est = jst - 14;
        if (est < 0){
            est += 24;
        }
        return est;
}

int main()
{   
    int hour;
    printf("今日本で何時(0-23)? ");
    scanf("%d", &hour);
    if (0 <= hour && hour <= 23){ // 0<= hour <= 23はだめ
        printf("今ニューヨークは%d時です\n", JST_to_EST(hour));
        return 0;
    }
    else {
        printf("エラー: 正しい時刻を入力して下さい");
        return 1;
    }
}