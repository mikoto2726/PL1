#include <stdio.h>

typedef struct date{
    int year;
    int month;
    int day;
} date;


void date_to_str(const date* d, char* s) { //sは文字列の先頭アドレス
    sprintf(s, "%04d-%02d-%02d", (*d).year, d->month, d->day);
}

int main() {
    char s[20];
    date d = {
        .year= 2023,
        .month= 5,
        .day= 30
        };

    date_to_str(&d, s);
    printf("%s\n", s);  

    return 0;
}
