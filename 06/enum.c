#include <stdio.h>

enum week{SUN, MON, TUE, WED, THU, FRI, SAT};

enum color{BLACK=0, RED=2, BLUE=1};

int main(){
    enum week w = SAT;
    enum color c;
    switch (w)
    {
    case SUN:
        c = RED; break;
    case SAT:
        c = BLUE; break;

    default:
        c = BLACK; break;
    }

    printf("week = %d, color = %d\n", w, c);
    return 0;
}