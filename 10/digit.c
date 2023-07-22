#include <stdio.h>
#include <stdbool.h>

#define IS_DIGIT(c) ('0' <= (c) && (c) <= '9')

static inline int is_digit(char c) {
  return '0' <= c && c <= '9';
}

int main(){
    const char *testcase = "a1c80z1!";
    for (int i = 0; testcase[i] != '\0'; i++){
        char c = testcase[i];
        printf("%c %d %d\n", c, IS_DIGIT(c), is_digit(c));
    }
      // マクロとインライン関数の違いを確認する例
    /*
    int x = 48;
    x++;
    printf("Macro: %d %d\n", IS_DIGIT(x), x);

    x = 48;
    x++;
    printf("Inline: %d %d\n", is_digit(x), x);

    return 0;
    */
    int num = 48;

    // マクロとインライン関数の挙動を確認するための例
    // 整数型変数 num を引数として使用
    printf("Using macro with int: %d\n", IS_DIGIT(num));
    printf("Using inline function with int: %d\n", is_digit(num));

    // double型変数 fnum を引数として使用
    double fnum = 48;
    printf("Using macro with double: %d\n", IS_DIGIT(fnum));
    // printf("Using inline function with double: %d\n", is_digit(fnum)); // This line would cause a compilation error!

    return 0;
}