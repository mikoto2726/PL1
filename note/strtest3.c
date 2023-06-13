#include <stdio.h>
#include <string.h>

int main(){
    char s[7] = "yamada"; //NULL文字を含めると5文字
    char t[20] = "tarou"; //後ろに空きスペースあり

    // INIADの後に文字を追加する
    t[5] = ' ';
    memcpy(&t[6], s, 7);

    printf("s = %s\n", s);
    printf("t = %s\n", t);
    return 0;
}