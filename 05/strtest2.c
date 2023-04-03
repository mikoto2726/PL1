#include <stdio.h>
#include <string.h>

int main(){
    char s[5] = "Toyo"; //NULL文字を含めると5文字
    char t[20] = "INIAD"; //後ろに空きスペースあり

    // INIADの後に文字を追加する
    t[5] = ' ';
    memcpy(&t[6], s, 5);

    printf("s = %s\n", s);
    printf("t = %s\n", t);
    return 0;
}